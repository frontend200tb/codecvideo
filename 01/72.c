#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void getUser(Employer*);
void printUser(Employer*);
void saveList(Employer*, char*);
void printList(Employer*);
Employer *addEnd(Employer*, Employer*);

int main() {
  int n = 0;
  Employer emp;
  Employer *begin = NULL, *end = NULL; // указатели на первый и последний элемент списка

L:printf("\n1.add\n2.delete\n3.save\n4.load\n5.print\n6.find\n7.exit\n");
  printf("Input number : ");
  scanf("%d", &n);

  switch(n) {
    case 1: getUser(&emp);
            printUser(&emp);
            end = addEnd(&emp, end);
            if (begin == NULL) begin = end;
            break;
    case 3: saveList(begin, "list.dat");
            break;
    case 5: printList(begin);
            break;
    case 7: exit(0); break;
  }
  goto L;

  return 0;
}

void getUser(Employer* user) {
  Employer tmp;
  printf("Enter name : ");
  fflush(stdin);
  gets(tmp.name);
  printf("Enter salary : ");
  scanf("%lf", &tmp.zp);
  printf("Enter age : ");
  scanf("%d", &tmp.age);
  tmp.pnext = tmp.pprev = NULL;

  *user = tmp;
}

void printUser(Employer* user) {
  printf("Name %s, Salary %lf, Age %d\n", user->name, user->zp, user->age);
}

void saveList(Employer *p, char *file) {
  FILE *pf = fopen(file, "w");
  while (p != NULL) {
    fwrite(p, sizeof(Employer), 1, pf);
    p = p -> pnext;
  }
  fclose(pf);
}

void printList(Employer* user) {
  while(user != NULL) {
    printUser(user);
    user = user->pnext;
  }
}

Employer *addEnd(Employer* addUser, Employer *end) {
  Employer *pAdd = (Employer*)malloc(sizeof(Employer));
  *pAdd = *addUser;
  if (end == NULL) end = pAdd;
  else {
    end->pnext = pAdd;
    pAdd->pprev = end;
    end = pAdd;
  }

  return end;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 12 Коллекции.wmv
2:02

меню для выбора действия
*/
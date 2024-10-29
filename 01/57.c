#include <stdio.h>
#include <stdlib.h>

int stringLen(char*);
char* stringCat(char*, char*);

int main() {
  char *s1 = "abc";
  char *s2 = "12345";
  char *s3 = stringCat(s1, s2);
  int len = stringLen(s3);
  printf("len = %d\n", len);
  printf("sum = %s\n", s3);
  free(s3);

  return 0;
}

int stringLen(char* s) {
  int i = 0;

  if (s == NULL) return -1;
  while (s[i] != '\0') i++;
  return i;
}

char* stringCat(char* a, char* b){
  int i, j;
  int a_len = stringLen(a);
  int b_len = stringLen(b);
  int c_len = a_len + b_len;
  char *c = (char*)malloc(c_len + 1);

  if (a == NULL || b == NULL) return "";
  for (i = 0; i < a_len; i++) c[i] = a[i];
  for (j = 0; j < b_len; j++, i++) c[i] = b[j];
  c[i] = '\0';
  return c;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 09 Файлы.wmv
0:50

Написать функцию, которая принимает две строки,
соединяет их и возвращает соединенную строку
*/
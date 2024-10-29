#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n = 0;

L:printf("\n1.add\n2.delete\n3.save\n4.load\n5.print\n6.find\n7.exit\n");
  printf("Input number : ");
  scanf("%d", &n);

  switch(n) {
    case 7: exit(0); break;
  }
  goto L;

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 12 Коллекции.wmv
0:15

меню для выбора действия
оператор goto, метка L
*/
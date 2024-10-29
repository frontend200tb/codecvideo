#include <stdio.h>

int main() {
  int max;
  int a, b, c;

  printf("Input a ");
  scanf_s("%d", &a);
  printf("Input b ");
  scanf_s("%d", &b);
  printf("Input c ");
  scanf_s("%d", &c);

  max = (a>b) ? (a>c) ? a : c : (b>c) ? b : c;

  printf("max=%d", max);
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 02 Операции.wmv
2:27
*/
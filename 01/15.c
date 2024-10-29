#include <stdio.h>

int main() {
  double a1, a2;
  int b = 7, c = 2;
  a1 = b / c; // целое число 3 запишется в тип данных double
  printf("a=%f\n", a1);
  a2 = (double) b / c; // 3.5
  printf("a=%f\n", a2);
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 02 Операции.wmv
1:58
*/
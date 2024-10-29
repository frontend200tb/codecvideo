#include <stdio.h>

int main() {
  int a, c = 1;

  switch (c) {
    case 0: a = 1; break;
    case 1: a = 10; break;
    case 2: a = 100; break;
    default: a = 0; break;
  }
  printf("a=%d", a);
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 03 Операторы.wmv
0:52
*/
#include <stdio.h>

int max3(int a, int b, int c);

int main() {
  printf("max=%d\n", max3(5,10,15));
  printf("max=%d\n", max3(15,10,5));
  printf("max=%d\n", max3(5,15,10));
  return 0;
}

int max3(int a, int b, int c) {
  return (a>b) ? (a>c) ? a : c : (b>c) ? b : c;
}

/*
2011 [Кораблин] Программирование на языке Си
Модуль 05 Функции.wmv
1:31
*/
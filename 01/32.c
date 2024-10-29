#include <stdio.h>

void swap(int a, int b);

int main() {
  int n = 10, m = 20;
  printf("n=%d m=%d\n", n, m); // не поменяются местами
  return 0;
}

void swap(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
}

/*
2011 [Кораблин] Программирование на языке Си
Модуль 05 Функции.wmv
1:36
*/
#include <stdio.h>

int factorial(int n);

int main() {
  int a = 5, result = 0;
  result = factorial(a);
  printf("%d!=%d\n", a, result);
  return 0;
}

int factorial(int n) {
  int f = 1;
  if (n==1) {
    return 1;
  }
  f = n * factorial(n-1);
  return f;
}

/*
2011 [Кораблин] Программирование на языке Си
Модуль 05 Функции.wmv
2:00
*/
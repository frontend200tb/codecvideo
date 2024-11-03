#include <stdio.h>

int main() {
  int i;
  int sign = 10;
  int base = 2;
  int res = 1;

  for (i = 0; i < sign; i++) {
    res *= base;
  }

  printf("%d powered by %d is %d", base, sign, res);
  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 5. Циклы. Как придать уникальности простым вещам
12.c 8:00

Возведение в степень
*/

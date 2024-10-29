#include <stdio.h>

int main() {
  double pi = 3.14159;

  printf("(f) pi=%f\n", pi);
  printf("(.2f) pi=%.2f\n", pi);
  printf("(.8f) pi=%.8f\n", pi);
  printf("(e) pi=%e\n", pi);
  printf("(g) pi=%g\n", pi);
  printf("(.2g) pi=%.2g\n", pi);
  printf("(.8g) pi=%.8g\n", pi);
  // printf("(d) pi=%d\n", pi); чтение int из double даст неверный результат
  printf("(d) pi=%d\n", (int) pi);

  printf("pi=%f\npi*pi=%f", pi, pi * pi);
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 01 Введение в язык Си.wmv
2:06
*/
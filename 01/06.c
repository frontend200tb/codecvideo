#include <stdio.h>

int main() {
  float a, b;  // 4 байта

  printf("Input float a b:");
  scanf_s("%f %f", &a, &b);  // 4 байта записать в 4 байта
  printf("a=%f b=%f\n", a, b);

  double c, d; // 8 байт

  printf("Input double c d:");
  // scanf_s("%f %f", &c, &d); 4 байта записать в 8 байт это неправильно
  scanf_s("%lf %lf", &c, &d);  // 8 байт записать в 8 байт
  printf("c=%f d=%f\n", c, d);
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 01 Введение в язык Си.wmv
2:27
*/
#include <stdio.h>
#include <math.h>

double (*psin)(double);
double (*pcos)(double);

int main() {
  int a = 0, b = 1;

  psin = sin;
  pcos = cos;
  printf("sin(0)=%f sin(1)=%f cos(0)=%f cos(1)=%f \n", psin(a), psin(b), pcos(a), pcos(b));

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 07 Массивы.wmv
1:45

Указатель на функцию
*/
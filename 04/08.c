#include <stdio.h>

int main()
{
  int two = 2;
  int three = 3;
  double a = three / two;
  printf("a = %.1f\n", a);

  a = three / (two + 0.0);
  printf("a = %.1f\n", a);

  double b = (double) two;
  a = three / b;
  printf("a = %.1f\n", a);

  int c = (int)a;
  printf("c = %d\n", c);

  return 0;
}

// 08. Преобразование типов данных в языке Си
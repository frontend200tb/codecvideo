#include <stdio.h>

int main()
{
  int a = 8, b = 9;
  printf("a = %d is ", a);
  (a % 2) ? printf("Even\n") : printf("Odd\n");
  printf("b = %d is ", b);
  (b % 2) ? printf("Even\n") : printf("Odd\n");

  int max;
  max = a > b ? a : b;
  printf("max = %d\n", max);

  return 0;
}

// 16. Проверка условий - тернарная операция
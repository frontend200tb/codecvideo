#include <stdio.h>

int main()
{
  int a = 10;

  printf("a = %d\n", a);
  printf("a += 5 = %d\n", a += 5);
  printf("a = %d\n", a);
  printf("a -= 5 = %d\n", a -= 5);
  printf("a = %d\n", a);
  printf("a *= 2 = %d\n", a *= 2);
  printf("a = %d\n", a);
  printf("a /= 2 = %d\n", a /= 2);
  printf("a = %d\n", a);
  printf("a %%= 2 = %d\n", a %= 2);
  printf("a = %d\n", a);

  return 0;
}

// 06. Составные операции в языке Си
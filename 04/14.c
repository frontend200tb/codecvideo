#include <stdio.h>

int main()
{
  char a = 'a', b = 'b';
  printf("a == a %d\n", a == a);
  printf("a > a %d\n", a > a);
  printf("a >= a %d\n", a >= a);
  printf("a < a %d\n", a < a);
  printf("a <= a %d\n", a <= a);

  printf("a == b %d\n", a == b);
  printf("a > b %d\n", a > b);
  printf("a >= b %d\n", a >= b);
  printf("a < b %d\n", a < b);
  printf("a <= b %d\n", a <= b);

  return 0;
}

// 14. Сравнение значений в Си
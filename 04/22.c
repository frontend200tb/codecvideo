#include <stdio.h>

void hello();
int sum(int, int);

int main()
{
  hello();
  printf("5 + 2 = %d\n", sum(5, 2));

  return 0;
}

void hello()
{
  printf("Hello!\n");
}

int sum(int a, int b)
{
  return a + b;
}

// 22. Функции, прототипы функций
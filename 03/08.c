#include <stdio.h>

int main()
{
  char num = 10; // -128 ... 127
  char min = -128;
  char max = 127;
  char x = 1, y = 2, z = 3;

  printf("%d %d %d\n", num, min, max);
  printf("%d %d %d\n", x, y, z);

  x = 10, y = 20, z = 30;
  printf("%d %d %d\n", x, y, z);

  return 0;
}

// #8. Переменные
#include <stdio.h>

unsigned char sum(unsigned char, unsigned char);
short sub(short, short);

int main()
{
  unsigned char x = 10;
  unsigned char y = 20;
  unsigned char z = sum(x, y);

  printf("%d\n", z);

  x = 100;
  y = 5;
  z = sum(x, y);

  printf("%d\n", z);

  short x2 = 150;
  short y2 = 40;
  short z2 = sub(x2, y2);

  printf("%d\n", z2);

  return 0;
}

unsigned char sum(unsigned char a, unsigned char b)
{
  return a + b;
}

short sub(short a, short b)
{
  return a - b;
}

// #13. Аргументы в функциях
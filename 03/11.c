#include <stdio.h>

short getNumber();
unsigned short getPositiveNumber();

int main()
{
  printf("%d\n", getNumber());
  printf("%d\n", getPositiveNumber());

  return 0;
}

short getNumber()
{
  return 30000; // -32 768 ... 32 767
}

unsigned short getPositiveNumber()
{
  return 60000; // 0 ... 65 535
}

// #11. Тип данных Short и маркеры в printf
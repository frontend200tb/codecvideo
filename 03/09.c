#include <stdio.h>

char getNumber();
unsigned char getPositiveNumber();
char getChar();

int main()
{
  printf("%d\n", getNumber());
  printf("%d\n", getPositiveNumber());
  printf("%c\n", getChar());
  printf("%d\n", getChar());

  return 0;
}

char getNumber()
{
  return 127; // -128 ... 127
}

unsigned char getPositiveNumber()
{
  return 130; // 0 ... 255
}

char getChar()
{
  return '1'; // -128 ... 127
}

// #9. Особенности Char
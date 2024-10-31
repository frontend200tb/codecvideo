#include <stdio.h>

char getNumber1();
char getNumber2();
char getNumber3();

int main()
{
  printf("%c\n", getNumber1());
  printf("%c\n", getNumber2());
  printf("%c\n", getNumber3());

  printf("%c\n", 'a');
  printf("%c\n", 'b');
  printf("%c\n", 'c');

  return 0;
}

char getNumber1()
{
  return 65;
}

char getNumber2()
{
  return 66;
}

char getNumber3()
{
  return 67;
}

// #7. Snippets. Функции. Тип Char
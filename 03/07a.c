#include <stdio.h>

char getNumber();

int main()
{
  printf("%d\n", 10);
  printf("%d\n", getNumber());

  return 0;
}

char getNumber()
{
  return 20;
}

// #7. Snippets. Функции. Тип Char
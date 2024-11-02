#include <stdio.h>
#include "26a.h"

int main()
{
  char a[30] = "Programming language";
  printf("5 + 5 = %d\n", sum(5, 5));
  print_str(a);

  return 0;
}

// 26. Пишем код на Си с разделением на файлы
// gcc -Wall 26.c 26a.h 26a.c
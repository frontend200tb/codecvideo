#include <stdio.h>

int main() {
  int *pi = NULL, i = 5;
  printf("%p %d \n", pi, i);

  pi = &i;
  printf("%p %p\n", pi, &i);
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 06 Адресная арифметика.wmv
0:33
*/
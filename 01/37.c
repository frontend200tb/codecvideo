#include <stdio.h>

int main() {
  int *pi = NULL, i = 5, m;
  printf("%p i=%d \n", pi, i);

  pi = &i;
  printf("%p %p\n", pi, &i);

  *pi = 7; // i = 7 разименование - отправить 7 по адресу который лежит в pi
  printf("i=%d\n", i);

  m = *pi; // m = i
  printf("m=%d\n", m);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 06 Адресная арифметика.wmv
0:43
*/
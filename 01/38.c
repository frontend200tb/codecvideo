#include <stdio.h>

int main() {
  int *pi = NULL, i = 5;
  void *pv = NULL;
  printf("pi=%p pv=%p i=%d\n", pi, pv, i);

  pi = &i;
  printf("pi=%p \n", pi);

  pv = pi;
  printf("pv=%p \n", pv);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 06 Адресная арифметика.wmv
0:50
*/
#include <stdio.h>

int main() {
  int *pi = NULL, i = 5;
  void *pv = NULL;
  double *pd = NULL;

  printf("i=%d pi=%p pv=%p pd=%p\n", i, pi, pv, pd);

  pi = &i;
  printf("pi=%p \n", pi);

  pv = pi;
  pd = (double*)pi;
  printf("i=%d pi=%p pv=%p pd=%p\n", i, pi, pv, pd);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 06 Адресная арифметика.wmv
0:58
*/
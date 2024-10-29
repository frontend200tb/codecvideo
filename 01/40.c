#include <stdio.h>

int main() {
  int *pi = NULL, i = 5;
  void *pv = NULL;
  double *pd = NULL;

  printf("i=%d pi=%p pv=%p pd=%p\n", i, pi, pv, pd);

  pi = &i;
  pv = pi;
  pd = (double*)pi;

  printf("pi=%p pv=%p pd=%p\n", pi, pv, pd);

  printf("%d \n", *pi);
  printf("%d \n", *(int*)pv);
  printf("%d \n", *(int*)pd);

  printf("pi=%p pv=%p pd=%p\n", ++pi, pv, pd); // увеличит на размер типа, т.е. sizeof(тип)

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 06 Адресная арифметика.wmv
1:07
*/
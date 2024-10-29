#include <stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b) {
  int tmp = *a; // разименование a. tmp = i
  *a = *b;  // i = j
  *b = tmp; // j = tmp
}

int main() {
  int i = 5, j = 10, *pi = NULL, *pj = NULL;
  pi = &i;
  pj = &j;

  printf("i=%d pi=%p j=%d pj=%p\n", i, pi, j, pj);

  swap(pi, pj);

  printf("i=%d pi=%p j=%d pj=%p\n", i, pi, j, pj);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 06 Адресная арифметика.wmv
1:35
*/
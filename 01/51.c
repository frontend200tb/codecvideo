#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main() {
  double *p = NULL;

  p = (double*)malloc(SIZE); // выделение памяти
  if (p == NULL) {
    printf("No memory");
    exit(0);
  }
  printf("%p\n", p);

  free(p); p = NULL; // освобождение памяти
  printf("%p", p);
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 08 Классы памяти.wmv
1:26

Выделение и освобождение памяти
*/
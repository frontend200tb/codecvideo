#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10 // при 10000000 сортировать будет 4 секунды
#define SIZEP 10

void Init(double*, int);
int minToMax (const void *, const void *);
int maxToMin (const void *, const void *);

void Init(double* arr, int len){
  int i;
  srand( (unsigned)time( NULL ) );
  for (i = 0; i < len; i++) {
    arr[i] = rand();  // случайное число от 0 до 32000
  }
}

int minToMax(const void *arg1, const void *arg2) {
  double a = *(double*)arg1, b = *(double*)arg2;
  int res = 0;
  if (a < b) res = -1;
  else if (a > b) res = 1;
  return res;
}

int maxToMin(const void *arg1, const void *arg2) {
  double a = *(double*)arg1, b = *(double*)arg2;
  int res = 0;
  if (a < b) res = 1;
  else if (a > b) res = -1;
  return res;
}

int main() {
  int i;
  double *p = NULL;

  p = (double*)malloc(SIZE * sizeof(double)); // выделение памяти
  if (p == NULL) {
    printf("No memory");
    exit(0);
  }
  Init (p, SIZE);
  for(i = 0; i < SIZEP; i++) printf("%3.1f ", p[i]);
  printf("\n");

  qsort(p, SIZE, sizeof(double), minToMax);
  for(i = 0; i < SIZEP; i++) printf("%3.1f ", p[i]);
  printf("\n");

  qsort(p, SIZE, sizeof(double), maxToMin);
  for(i = 0; i < SIZEP; i++) printf("%3.1f ", p[i]);
  printf("\n");

  free(p); p = NULL; // освобождение памяти

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 08 Классы памяти.wmv
2:20

Быстрая сортировка стандартная функция qsort()
*/
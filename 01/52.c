#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void Init(double*, int);
void QSort(double*, int, int);

void Init(double* arr, int len){
  int i;
  srand( (unsigned)time( NULL ) );
  for (i = 0; i < len; i++) {
    arr[i] = rand();  // случайное число от 0 до 32000
  }
}

void QSort(double* arr, int start, int end) {
  int i = start, j = end;
  double tmp, mid = arr[(start + end) / 2];

  do {
    while (arr[i] < mid && i < end) {
      i++;
    }
    while (mid < arr[j] && j > start) {
      j--;
    }
    if (i <= j) {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
  } while (i <= j);
  if (start < j) QSort(arr, start, j);
  if (i < end) QSort(arr, i, end);
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
  for(i = 0; i < SIZE; i++) printf("%3.1f ", p[i]);
  printf("\n");

  QSort(p, 0, SIZE-1);
  for(i = 0; i < SIZE; i++) printf("%3.1f ", p[i]);
  printf("\n");

  QSort(p, 0, SIZE-1);
  for(i = 0; i < SIZE; i++) printf("%3.1f ", p[i]);
  printf("\n");

  free(p); p = NULL; // освобождение памяти

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 08 Классы памяти.wmv
2:00

Быстрая сортировка
*/
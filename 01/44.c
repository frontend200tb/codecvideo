#include <stdio.h>

#define SIZE 10
#define SIZE2 5

void minMax(int a[], int len, int *pmin, int *pmax);

void minMax(int a[], int len, int *pmin, int *pmax) {
  printf("\nlen = %d \n", len);
  int minTmp = a[0];
  int maxTmp = a[0];

  for (int i = 1; i < len; i++) {
    if (a[i] > maxTmp) {
      maxTmp = a[i];
    } else if (a[i] < minTmp) {
      minTmp = a[i];
    }
  }

  *pmin = minTmp;
  *pmax = maxTmp;
}

int main() {
  int data[SIZE] = {2, 3, 8, 1, -3, 0, 2, -5, 1, 8};
  int min, max;

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", data[i]);
  }
  minMax(data, SIZE, &min, &max);
  printf("min=%d max=%d \n", min, max);

  int data2[SIZE2] = {3, -3, 0, -6, 20};

  for (int i = 0; i < SIZE2; i++) {
    printf("%d ", data2[i]);
  }
  minMax(data2, SIZE2, &min, &max);
  printf("min=%d max=%d \n", min, max);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 07 Массивы.wmv
0:20

Поиск минимума и максимума в массиве
В minMax передаем два указателя на min и на max
*/
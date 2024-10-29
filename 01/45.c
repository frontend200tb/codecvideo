#include <stdio.h>

#define RES_SIZE 2
#define SIZE 10
#define SIZE2 5

void minMax(int a[], int len, int r[], int r_len);

void minMax(int a[], int len, int r[], int r_len) {
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

  r[0] = minTmp;
  r[1] = maxTmp;
}

int main() {
  int res[2];
  int data[SIZE] = {2, 3, 9, 1, -3, 0, 2, -15, 1, 8};
  int min, max;

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", data[i]);
  }
  minMax(data, SIZE, res, RES_SIZE);
  printf("min=%d max=%d \n", res[0], res[1]);

  int data2[SIZE2] = {3, -13, 0, -6, 30};

  for (int i = 0; i < SIZE2; i++) {
    printf("%d ", data2[i]);
  }
  minMax(data2, SIZE2, res, RES_SIZE);
  printf("min=%d max=%d \n", res[0], res[1]);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 07 Массивы.wmv
1:15

Поиск минимума и максимума в массиве
В minMax передаем массив из двух элементов min и max
*/
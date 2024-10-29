#include <stdio.h>

#define SIZE 10
#define SIZE2 SIZE / 2

int max(int a[], int len);

int max(int a[], int len) {
  printf("\nlen = %d \n", len);
  int max = a[0];
  for (int i = 1; i < len; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

int main() {
  int data[SIZE] = {2, 3, 8, 1, -3, 0, 2};

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", data[i]);
  }
  printf("max=%d \n", max(data, SIZE));

  int data2[SIZE2] = {3, 15 -9, 0, 20};

  for (int i = 0; i < SIZE2; i++) {
    printf("%d ", data2[i]);
  }
  printf("max=%d \n", max(data2, SIZE2));

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 06 Адресная арифметика.wmv
2:20
*/
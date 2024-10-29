#include <stdio.h>

#define SIZE 10

void print(int*, int);
int maxToMin(int, int);
int minToMax(int, int);
void bubble(int*, int, int (*compare)(int, int));

void print(int *arr, int n) {
  for(int i = 0; i < n; i++) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

int maxToMin(int a, int b) {
  return a > b;
}

int minToMax(int a, int b) {
  return !maxToMin(a, b);
}

void bubble(int *arr, int n, int (*compare)(int, int)) {
  int i, j, swap;
  int tmp;

  for(i = 1; i < n; i++) {
    swap = 0;
    for(j = 0; j < n - i; j++) {
      if (compare(arr[j], arr[j+1])) {
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
        swap = 1;
      }
    }
    print(arr, n);
    if (swap == 0) {
      return;
    }
  }
}

int main() {
  int data[SIZE] = {1, 2, 3, 4, 5, 10, 9, 8, 7, 6};
  print(data, SIZE);

  bubble(data, SIZE, maxToMin);
  print(data, SIZE);

  bubble(data, SIZE, minToMax);
  print(data, SIZE);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 07 Массивы.wmv
2:32

Пузырьковая сортировка массива
Принимает еще и функцию сравнения, чтобы отсортировать по макс или мин
*/
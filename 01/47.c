#include <stdio.h>

#define SIZE 4 //10

void print(int*, int);
void bubble(int*, int);

void print(int *arr, int n) {
  for(int i = 0; i < n; i++) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

void bubble(int *arr, int n) {
  int i, j, swap;
  int tmp;

  for(i = 1; i < n; i++) {
    swap = 0;
    for(j = 0; j < n - i; j++) {
      if (arr[j] > arr[j+1]) {
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
  int data[SIZE] = {1,3,2,4};//{9, 3, 2, 1, -3, 0, 2, 8, 1, -15};
  print(data, SIZE);

  bubble(data, SIZE);
  print(data, SIZE);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 07 Массивы.wmv
2:20

Пузырьковая сортировка массива
*/
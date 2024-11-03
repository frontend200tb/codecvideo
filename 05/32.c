#include <stdio.h>

int oddDoubler(int*, int);

int main() {
  int i;
  const int SIZE = 10;
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[5] = {2, 4, 6, 8, 10};

  if (oddDoubler(arr, SIZE)) {
    for (i = 0; i < SIZE; i++) {
      printf("%d ", *(arr + i));
    }
  }

  if (oddDoubler(arr2, 5)) {
    for (i = 0; i < 5; i++) {
      printf("%d ", *(arr2 + i));
    }
  }

  return 0;
}

int oddDoubler(int* array, int len) {
  int i;
  int changed = 0;
    for (i = 0; i < len; i++) {
      if (array[i] % 2 != 0) {
        array[i] *= 2;
        changed = 1;
      }
    }
  return changed;
}


/*
2017 [geekbrains] Основы языка Си
Урок 10. Домашняя работа
32.c 11:00

Задание 2.
Используя массив из целых чисел, описать функцию, принимающую на вход этот массив. Функция должна вернуть 0, если в массиве нет нечетных чисел. Если есть нечетные числа, то надо их удвоить и вернуть 1.
Если массив был изменен то вывести все числа из массива на экран
*/

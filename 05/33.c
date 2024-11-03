#include <stdio.h>

void asShortPrint(unsigned int*, int);

int main() {
  unsigned int arr[5] = {2000000, 1000000, 65535, 65536, 0};
  asShortPrint(arr, 5);

  return 0;
}

void asShortPrint(unsigned int *array, int len) {
  int i;
  unsigned short *out = array;
  for (i = 0; i < len * 2; i++) {
    printf("%d ", *(out + i));
  }
}


/*
2017 [geekbrains] Основы языка Си
Урок 10. Домашняя работа
33.c 14:00

Задание 3.
Переменная типа integer занимает в памяти 4 байта, short 2 байта.
Опишите функцию, которая принимает массив 32 разрядных чисел типа int и выводит его на экран 16 разрядными числами типа short
*/

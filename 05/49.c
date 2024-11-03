#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* arrayInit(int);

int main() {
  const int SIZE = 5;
  // инициализация массива нулями
  int *arr = arrayInit(SIZE);
  int i;
  // выведем массив на экран
  for (i = 0; i < SIZE; i++) {
    printf("%4d ", *(arr + i));
  }
  printf("\n");
  // заполним массив и выведем на экран
  for (i = 0; i < SIZE; i++) {
    *(arr + i) = i * 10 + 1;
    printf("%4d ", *(arr + i));
  }

  return 0;
}

int* arrayInit(int len) {
  return calloc(len, sizeof(int));
}


/*
2017 [geekbrains] Основы языка Си
Урок 14.1 Домашняя работа
49.c 10:00

Задание 3. Выделение памяти
Написать функцию-обертку, которая возвращает указатель на область памяти для массива из элементов типа integer. Функция принимает количество элементов массива. Массив должен быть инициализирован нулями. Для проверки заполните этот массив и выведите на экран
*/

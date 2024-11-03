#include <stdio.h>

#define LEN 10

void printArray(int*, int);
double average(int*, int);

int main() {
  int arr[LEN];
  int i = 0;
  double res = 0;

  while(i < LEN) {
    printf("input value %d ", i);
    scanf("%d", arr + i);
    i++;
  }

  printArray(arr, LEN);
  res = average(arr, LEN);
  printf("result = %.2lf", res);

  return 0;
}

void printArray(int *array, int length) {
  int i;
  for (i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
}

double average(int *array, int length) {
  int i;
  double res = 0;
  for (i = 0; i < length; i++) {
    res += *(array + i);
  }
  res /= 10;
  return res;
}


/*
2017 [geekbrains] Основы языка Си
Урок 9. Массивы. Проверяем насколько хорош генератор псевдослучайных чисел
28.c 9:00

Посчитаем среднеарифметическое всех чисел в массиве
Обычный указатель хранит в себе адрес какой-то переменной и сам где-то хранится
Имя массива это указатель на массив, указатель на адрес его нулевого элемента и сам он хранится в этом же месте
Мы можем передавать идентификатор (имя) массива без использования взятия адреса
Нигде в массиве не хранится информация о его длине, поэтому длину массива надо передавать как параметр в функцию вместе с указателем на массив
*/

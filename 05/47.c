#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void decToBin(int, char*);

int main() {
  char bin[64] = "b'";
  int number;
  printf("Input number ");
  scanf("%d", &number);
  decToBin(number, bin);
  printf("binary %s", bin);

  return 0;
}

void decToBin(int num, char *res) {
  char out[64];
  int i = 0;
  int tmp = num;
  while (tmp != 0) {
    tmp = tmp >> 1;
    i++;
  }
  out[i] = '\0';
  while (num > 0) {
    out[--i] = (num % 2) ? '1' : '0';
    num /= 2;
  }
  strcat(res, out);
}


/*
2017 [geekbrains] Основы языка Си
Урок 14.1 Домашняя работа
47.c 3:00

Задание 1. Строки
Описать функцию, которая вернет строку с двоичным представлением десятичного числа переданного в аргументе этой функции
*/

#include <stdio.h>
#include "isPrime.h"

int main() {
  int num, dd;

  do {
    printf("Enter number (0  < num < 100) ");
    scanf("%d", &num);
  } while (num < 0 || num > 100);

  dd = isPrime(num);
  printf("Number %d is %s simple", num, (dd==1) ? "" : "not");

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 6. Функции. Пишем универсальные фрагменты кода
21.c 10:00

Заголовочный файл с функцией isPrime является ли число простым
*/

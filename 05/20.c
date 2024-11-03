#include <stdio.h>

int isPrime(int);

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

int isPrime(int number) {
  int d = 0, i = 1;

  while (i <= number) {
    if (number % i == 0) {
      d++;
    }
    if (d == 3) {
      return 0;
    }
    i++;
  }

  return (d == 2) ? 1 : 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 6. Функции. Пишем универсальные фрагменты кода
20.c 9:00

Прототип функции isPrime является ли число простым
*/

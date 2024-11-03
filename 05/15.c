#include <stdio.h>

int main() {
  const int MIN = 0;
  const int MAX = 100;
  int num;

  printf("Input number (0-100) : ");
  scanf("%d", &num);
  if (num >= MIN && num <= MAX) {
    printf("number %d in range %d - %d", num, MIN, MAX);
  } else {
    printf("number %d not in range %d - %d", num, MIN, MAX);
  }

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 5. Решение домашнего задания
15.c 2:00

Проверить входит ли введенное число в указанный диапазон
*/

#include <stdio.h>

int main() {
  int num, d = 0, i = 1;

  do {
    printf("Enter number (0  < num < 100) ");
    scanf("%d", &num);
  } while (num < 0 || num > 100);

  while (i <= num) {
    if (num % i == 0) {
      d++;
    }
    if (d == 3) {
      break;
    }
    i++;
  }

  printf("Number %d is %s simple", num, (d==2) ? "" : "not");
  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 5. Циклы. Как придать уникальности простым вещам
11.c 4:00

Ввести число от 1 до 99, проверить простое ли оно
*/

#include <stdio.h>

int main() {
  int a = 10, b = 18, even = 0;
  printf("a = %d, b = %d\n", a, b);

  while (a < b) {
    if (a % 2 == 0) {
      even++;
    }
    a++;
  }

  printf("even = %d\n", even);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 4. Циклы. Отдаём программе рутинные задачи
09.c 2:00

Вывести количество четных чисел от a до b
*/

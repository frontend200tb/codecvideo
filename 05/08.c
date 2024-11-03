#include <stdio.h>

int main() {
  int a = 10, b = 18;
  printf("a = %d, b = %d\n", a, b);

  while (a < b) {
    printf("a = %d ", a);
    a++;
  }

  printf("a = %d, b = %d\n", a, b);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 4. Циклы. Отдаём программе рутинные задачи
08.c 1:00

Вывести все числа от a до b
*/

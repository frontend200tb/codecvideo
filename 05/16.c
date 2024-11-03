#include <stdio.h>

int main() {
  const int COUNT = 10;
  int num, i = 1;
  double res = 0;

  do {
    printf("Input number %d (0-100) : ", i);
    scanf("%d", &num);
    res += num;

  } while (++i <= COUNT);
  res /= 10;
  printf("result = %.2f", res);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 5. Решение домашнего задания
16.c 5:00

Ввести 10 чисел и посчитать их среднее арифметическое
*/

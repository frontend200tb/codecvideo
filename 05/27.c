#include <stdio.h>

#define LEN 10

int main() {
  int arr[LEN];
  int i = 0;
  double res = 0;

  while(i < LEN) {
    printf("input value %d ", i);
    scanf("%d", arr + i);
    res += *(arr + i);
    i++;
  }

  for (i = 0; i < LEN; i++) {
    printf("%d ", arr[i]);
  }

  res /= 10;

  printf("result = %.2lf", res);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 9. Массивы. Проверяем насколько хорош генератор псевдослучайных чисел
27.c 3:00

Посчитаем среднеарифметическое всех чисел в массиве
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10
#define AMOUNT 1000000

int main() {
  int a, i;
  int arr[LEN] = {0};

  srand(time(NULL));
  for (i = 0; i < AMOUNT; i++) {
    a = rand() % LEN;
    arr[a]++;
  }

  for (i = 0; i < LEN; i++) {
    printf("Number %d generated %6d (%5.2lf%%) times\n", i, arr[i], ((double)arr[i]/AMOUNT*100));
  }

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 8. Массивы. Собираем подобное к подобному
25.c 1:00

Проверим насколько случаен генератор случайных чисел
*/

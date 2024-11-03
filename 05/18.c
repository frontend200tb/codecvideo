#include <stdio.h>

int sum (int x, int y) {
  return x + y;
}

int main() {
  printf("%d + %d = %d", 5, 3, sum(5, 3));

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 6. Функции. Пишем универсальные фрагменты кода
18.c 3:00

Функция sum сумма двух чисел
*/

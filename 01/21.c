#include <stdio.h>

int main() {
  int a, b, i;

  printf("input a (0-255)");
  scanf_s("%d", &a);
  printf("input b (0-255)");
  scanf_s("%d", &b);

  if (a < 0 || a > b) {
    a = 0;
  }

  if (b < a || b > 255) {
    b = 255;
  }

  for (i = a; i <= b; i++) {
    printf("%d = %c ", i, i);
  }
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 03 Операторы.wmv
1:47
*/
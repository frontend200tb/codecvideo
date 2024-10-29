#include <stdio.h>

int main() {
  int n, i;
  int sizeInt = sizeof(int) * 8;
  int one = 1;

  printf("input integer: ");
  scanf_s("%d", &n);

  for (i = 0; i < sizeInt; i++) {
    printf("%1d", n&one ? 1 : 0);
    one <<= 1;
  }
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 03 Операторы.wmv
2:30
*/
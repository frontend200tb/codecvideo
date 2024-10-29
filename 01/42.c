#include <stdio.h>

int main() {
  int d[10] = {};
  int d2[2][5];
  int max = sizeof(d) / sizeof(int);

  for (int i = 0; i < max; i++) {
    printf("%d ", d[i]);
  }

  printf("\n");

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", d2[i][j]);
    }
    printf("\n");
  }

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 06 Адресная арифметика.wmv
2:03
*/
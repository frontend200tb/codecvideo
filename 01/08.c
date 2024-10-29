#include <stdio.h>

int main() {
  int m, n = 7;
  m = n++ + 3;
  printf("n=%d m=%d\n", n, m);

  n = 7;
  m = ++n + 3;
  printf("n=%d m=%d\n", n, m);
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 02 Операции.wmv
0:24
*/
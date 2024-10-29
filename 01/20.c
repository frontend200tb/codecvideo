#include <stdio.h>

int main() {
  int a = 1;

  while (a++ < 5) {
    printf("a=%d\n", a);
  }

  for (a = 0; a < 3 ; a++, printf("a=%d\n", a)) {}
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 03 Операторы.wmv
1:20
*/
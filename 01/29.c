#include <stdio.h>

int main() {
  int n = __LINE__; // номер текущей строки кода
  printf("n=%d\n", n); // 4
  printf("file name %s\n", __FILE__); // 29.c имя файла
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 04 Препроцессор.wmv
2:03
*/
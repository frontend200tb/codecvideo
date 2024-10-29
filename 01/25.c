#include <stdio.h>

#define MAX2(a, b) a>b ? a : b

int main() {
  int n1=3, n2=5;
  printf("max=%d\n", MAX2(n1, n2));
  printf("max=%.1f\n", MAX2(29.2, n2));
  printf("max=%.1f\n", MAX2(29.2, 4e2));
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 04 Препроцессор.wmv
0:47
*/
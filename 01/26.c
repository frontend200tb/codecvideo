#include <stdio.h>

#define AREA(a) a * a
#define TRUE_AREA(a) ((a) * (a))

int main() {
  printf("area=%d\n", AREA(5)); //  5*5 = 25
  printf("area=%d\n", AREA(4 + 1)); //  4+1*4+1 = 9
  printf("area=%d\n", 100 / AREA(5)); //  100 / 5 * 5 = 100
  printf("true area=%d\n", TRUE_AREA(5)); //  ((5) * (5)) = 25
  printf("true area=%d\n", TRUE_AREA(4 + 1)); //  ((4+1) * (4+1)) = 25
  printf("true area=%d\n", 100 / TRUE_AREA(5)); //  100 / ((5) * (5)) = 4

  int n = 5;
  AREA(n++);
  printf("n=%d\n", n); // n++ * n++ , n=7
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 04 Препроцессор.wmv
0:59
*/
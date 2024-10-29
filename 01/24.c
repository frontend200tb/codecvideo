#include <stdio.h>

#undef PI
#define PI 3.1415926

#define BEGIN {
#define END }
#define REAL double
#define START int main()

START
BEGIN
  REAL d = PI;
  printf("d=%f\n", d);
  return 0;
END


/*
2011 [Кораблин] Программирование на языке Си
Модуль 04 Препроцессор.wmv
0:39
*/
#include <stdio.h>
#include <stdarg.h>

int sum(int n, ...);

int main() {
  int result = sum(5,  1,2,3,4,5);
  printf("summa = %d\n", result);
  return 0;
}

int sum(int n, ...) {
  int s = 0;
  va_list list;
  va_start(list,n);

  while (n--) {
    s += va_arg(list, int);
  }
  return s;
}

/*
2011 [Кораблин] Программирование на языке Си
Модуль 05 Функции.wmv
2:43
*/
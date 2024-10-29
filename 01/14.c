#include <stdio.h>

int main() {
  int n = 1, m, mm;

  printf("sizeof(n)=%llu\n", sizeof(n));
  m = sizeof(++n); // m = 4 байта, sizeof вычисляет только тип результата и не выполняет выражение внутри него
  mm = sizeof(++n + 0.1); // mm = 8 байт
  printf("n=%d m=%d mm=%d\n", n, m, mm);
  printf("sizeof(int)=%llu sizeof(double)=%llu\n", sizeof(int), sizeof(double));
  printf("sizeof(double[100])=%llu\n", sizeof(double[100]));
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 02 Операции.wmv
1:49
*/
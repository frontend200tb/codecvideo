#include <stdio.h>

#define SWAP(a, b) { int buf = a; a = b; b = buf; }
#define TRUE_SWAP(a, b) { int a##b = a; a = b; b = a##b; }

int main() {
  int n = 5, m = 10, buf = 5;
  SWAP(n, m)
  printf("n=%d m=%d\n", n, m); // n=10 m=5
  SWAP(n, m)
  printf("n=%d m=%d\n", n, m); // n=5 m=10
  SWAP(buf, m)
  printf("buf=%d m=%d\n", n, m); // buf=5 m=10 замены не будет, совпало имя buf
  TRUE_SWAP(buf, m)
  printf("buf=%d m=%d\n", buf, m); // buf=10 m=5
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 04 Препроцессор.wmv
1:12
*/
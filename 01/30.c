#include <stdio.h>
#include <math.h>

int primeNum(int limit);

int main() {
  int result = 0;
  result = primeNum(33);
  printf("\ncount=%d", result);
  return 0;
}

int primeNum(int limit) {
  int t, i, flag, count = 0;
  // проверка входных параметров
  if (limit <= 0) ;
  else {
    if (limit >= 1) {
      printf("1");
    }
    for (t=2; t <= limit; t++) {
      flag = 1;
      for (i=2; i*i <= t; i++) {
        if (t%i == 0) {
          flag = 0;
          break;
        }
      }
      if (flag) {
        printf("%d ", t);
        count++;
      }
    }
  }
  return count;
}

/*
2011 [Кораблин] Программирование на языке Си
Модуль 05 Функции.wmv
0:20
*/
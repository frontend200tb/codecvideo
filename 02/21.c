#include <stdio.h>

void sum(int, int);

int main() {
  sum(20, 30);
  int x = 5, y = 7;
  sum(x, y);

  return 0;
}

void sum(int a, int b) {
  int res = a + b;
  printf("%d\n", res);
}


/*
#6 - Функции в Си.mp4
21.с 12:00
*/
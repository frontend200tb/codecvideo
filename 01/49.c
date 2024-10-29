#include <stdio.h>

void test() {
  static int n = 0;
         int m = 0;

  n++; m++;
  printf("%d %d\n", n, m);
}

int main() {
  test();  // 1 1
  test();  // 2 1

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 08 Классы памяти.wmv
0:48

Статическая память инициализируется один раз
*/
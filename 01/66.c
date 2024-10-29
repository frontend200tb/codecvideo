#include <stdio.h>
#include <stdlib.h>
#include "myheader.h"

int main() {
  Goods g, *pg = &g;

  // инициализация
  *g.name = "notebook";
  g.price = 77.7;
  g.data.yy = 2024;
  g.data.mm = 1;
  g.data.dd = 1;
  pg -> prod = "Russia";
  pg -> weight = 5;

  // вывод
  printf("name = %s\n", g.name);
  printf("weight = %d kg\n", g.weight);
  printf("made in %s\n", g.prod);
  printf("price = %.2f\n", g.price);
  printf("data prod = %d.%02d.%02d\n", g.data.yy, g.data.mm, g.data.dd);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 11 Структуры.wmv
0:35

Заполним структуру данных Goods
*/
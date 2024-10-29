#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"

void GetGoods (Goods*);

int main() {
  Goods g, *pg = &g;
  GetGoods(pg);

  printf("name %s\n", g.name);
  printf("made in %s\n", g.prod);
  printf("price %.2f rub\n", g.price);
  printf("weight %d kg\n", g.weight);
  printf("made of %d.%02d.%02d\n", g.data.yy, g.data.mm, g.data.dd);
  return 0;
}

void GetGoods (Goods *pgoods) {
  char buf[255];
  Goods tmp;

  fflush(stdin); // очистить входной поток
  printf("Input name : ");
  gets(tmp.name);
  fflush(stdin); // очистить входной поток
  printf("Input prod : ");
  gets(buf);
  tmp.prod = (char*)malloc(strlen(buf) + 1);
  strcpy(tmp.prod, buf);
  printf("Input price : ");
  scanf("%lf", &tmp.price);
  printf("Input weight : ");
  scanf("%d", &tmp.weight);
  printf("Input YYYY MM DD : ");
  scanf("%d %d %d", &tmp.data.yy, &tmp.data.mm, &tmp.data.dd);
  *pgoods = tmp;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 11 Структуры.wmv
1:00

Функция ввода данных одного товара
вывод данных на печать
*/
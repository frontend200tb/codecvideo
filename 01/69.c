#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"

void GetGoods(Goods*);
void PrintGoods(Goods);
void CopyGoods(Goods*, Goods*);

int main() {
  Goods g, g2, *pg = &g;

  GetGoods(pg);
  CopyGoods(&g2, &g);
  PrintGoods(g2);

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

void PrintGoods(Goods good) {
  printf("name %s\n", good.name);
  printf("made in %s\n", good.prod);
  printf("price %.2f rub\n", good.price);
  printf("weight %d kg\n", good.weight);
  printf("made of %d.%02d.%02d\n", good.data.yy, good.data.mm, good.data.dd);
}

void CopyGoods(Goods *d, Goods *s) {
  *d = *s; // побитовое копирование структурной переменной
  d -> prod = NULL;
  d -> prod = (char*)malloc(strlen(s -> prod) + 1);
  strcpy(d -> prod, s -> prod);
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 11 Структуры.wmv
1:50

Скопировать структурную переменную.
Нельзя использовать побитовое копирование структурной переменной, в которой
есть указатель на участок памяти. Необходимо обрабатывать каждый указатель отдельно
*/
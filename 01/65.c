#include <stdio.h>
#include <stdlib.h>
#include "myheader.h"

int main() {
  Goods g;
  printf("size = %d\n", sizeof(Goods)); // 88 байт
  printf("adress = %p\n", &g);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 11 Структуры.wmv
0:20

Структура данных занимает не столько памяти, сколько занимают ее элементы,
а компилятор округляет до ближайшего большего
*/
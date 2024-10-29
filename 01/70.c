#include <stdio.h>

int main() {
  union rgba {
    unsigned long color;
    unsigned char rgba[4];
  };

  union rgba c1;
  c1.rgba[0] = 0;
  c1.rgba[1] = 0;
  c1.rgba[2] = 0;
  c1.rgba[3] = 255;

  printf("size = %d\n", sizeof(c1.color));
  printf("color = %08x\n", c1.color);

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 11 Структуры.wmv
2:10

union тип
*/
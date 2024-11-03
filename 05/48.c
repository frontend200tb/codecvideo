#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct rectangle {
  int height;
  int width;
  int area;
  int perimeter;
} Rectangle;

void calcRectangle(Rectangle*);

int main() {
  Rectangle rectangle;
  printf("Input height width ");
  scanf("%d %d", &rectangle.height, &rectangle.width);
  calcRectangle(&rectangle);
  printf("area = %d, perimeter = %d", rectangle.area, rectangle.perimeter);

  return 0;
}

void calcRectangle(Rectangle *r) {
  r->area = r->height * r->width;
  r->perimeter = (r->height + r->width) * 2;
}


/*
2017 [geekbrains] Основы языка Си
Урок 14.1 Домашняя работа
48.c 7:00

Задание 2. Структуры
Описать структуру "прямоугольник", с целочисленными значениями длины, ширины, периметра и площади.
Написать функцию, принимающую на вход указатель на структуру, которая подсчитывает и записывает периметр и площадь в структуру
*/

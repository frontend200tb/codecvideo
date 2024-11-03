#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct dot {
  int x;
  int y;
} Dot;

typedef struct line {
  float length;
  Dot a;
  Dot b;
} Line;

Line initLine(int, int, int, int);

int main() {
  int x1, y1, x2, y2;
  printf("Input x1 y1 ");
  scanf("%d %d", &x1, &y1);
  printf("Input x2 y2 ");
  scanf("%d %d", &x2, &y2);
  Line l = initLine(x1, y1, x2, y2);
  printf("line coordinates x1=%d, y1=%d, x2=%d, y2=%d, length=%.2f", l.a.x, l.a.y, l.b.x, l.b.y, l.length);

  return 0;
}

Line initLine(int x1, int y1, int x2, int y2) {
  Line line1;
  line1.a.x = x1;
  line1.a.y = y1;
  line1.b.x = x2;
  line1.b.y = y2;
  line1.length = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
  return line1;
}


/*
2017 [geekbrains] Основы языка Си
Урок 14.1 Домашняя работа
50.c 14:00

Задание 4.
Описать структуру "прямая линия", состоящую из длины и двух внутренних структур типа "точка", в каждой из которых содержатся координаты x и y. Описать функцию, принимающую на вход координаты двух точек и возвращающую структуру "прямая линия" с подсчитанной длиной
*/

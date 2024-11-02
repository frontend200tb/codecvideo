#include <stdio.h>

struct Coords
{
  int x;
  int y;
} start;

struct Coords left;

typedef struct
{
  int x;
  int y;
} Point;

typedef struct
{
  Point a;
  Point b;
} Line;

int main()
{
  start.x = 0;
  start.y = 0;
  left.x = -10;
  left.y = 0;
  struct Coords right = {10, 0};
  printf("start x = %i y = %i\n", start.x, start.y);
  printf("left x = %i y = %i\n", left.x, left.y);
  printf("reft x = %i y = %i\n", right.x, right.y);

  Point topa = {2, 3};
  Point topb;
  topb.x = 4;
  topb.y = 5;
  printf("topa x = %i y = %i\n", topa.x, topa.y);
  printf("topb x = %i y = %i\n", topb.x, topb.y);

  Line linea = {{0,5}, {5,5}};
  printf("linea x1 = %i y1 = %i x2 = %i y2 = %i\n", linea.a.x, linea.a.y, linea.b.x, linea.b.y);
  return 0;
}

// 34. Структуры в языке Си
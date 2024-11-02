#include <stdio.h>

int main()
{
  char a[5] = {'A', 'B', 'C', 'D', 'E'};
  printf("%c %c %c %c %c\n", a[0], a[1], a[2], a[3], a[4]);

  char b[] = {'x', 'y', 'z'};
  printf("%c %c %c\n", b[0], b[1], b[2]);

  char c[] = {'s', 't', 'r', '\0'};
  printf("%s\n", c);

  char d[3];
  d[0] = 10;
  d[1] = 20;
  d[2] = 30;
  printf("%d %d %d\n", d[0], d[1], d[2]);

  return 0;
}

// 09. Массивы, создание массивов в языке Си
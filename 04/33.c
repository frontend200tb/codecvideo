#include <stdio.h>
#include <stdlib.h>

void fa();
void fb();
void fc();

int main()
{
  fa();
  fb();
  fc();

  return 0;
}

void fa() {
  char a[] = "75number";
  char b[] = "number 36";
  char c[] = "125";
  char d[] = "-005number";
  int na = atoi(a);
  int nb = atoi(b);
  int nc = atoi(c);
  int nd = atoi(d);

  printf("%d %d %d %d\n", na, nb, nc, nd);
}

void fb() {
  int a = 75;
  char sa[10];
  sprintf(sa, "%d", a);
  printf("number %d convert to decimal string %s\n", a, sa);
  sprintf(sa, "%o", a);
  printf("number %d convert to 8-mal string %s\n", a, sa);
  sprintf(sa, "%x", a);
  printf("number %d convert to 16 string %s\n", a, sa);
}

void fc() {
  int a = 100;
  char sa[10];
  itoa(a, sa, 10);
  printf("number %d convert to 10 string %s\n", a, sa);
  itoa(a, sa, 2);
  printf("number %d convert to 2 string %s\n", a, sa);
}

// 33. Строки, функции atoi, sprintf, itoa в языке Си
/*
atoi(str) создает из строки str число
sprintf(str, format, num) создает из числа num в формате format строку str
itoa(num, str, format) создает из числа num в формате format (2, 8, 10, 16) строку str
*/
#include <stdio.h>

int main() {
  short s = 500;
  int i = s;
  long l = s;
  long long ll = s;
  printf("short %d\nint %d\nlong %ld\nlong long %lld\n", s, i, l, ll);

  float f = 3.1415f;
  double d = 3.14159f;
  long double ld = f;
  printf("float %f\ndouble %lf\nlong double %Lf", f, d, ld);

  return 0;
}


/*
#2 - Переменные и типы данных.mp4
04.с 14:00
*/
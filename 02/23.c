#include <stdio.h>

double mult(double, double);

int main() {
  printf("%.2f\n", mult(5.5, 3.5));

  double res = mult(3.1, 201.4);
  printf("%.2f\n", res);

  return 0;
}

double mult(double a, double b) {
  return a * b;
}


/*
#6 - Функции в Си.mp4
23.с 18:00
*/
#include <stdio.h>
#include <math.h>

int calculateSquareEquation(int, int, int, float*, float*);

int main() {
  int a, b, c, res;
  float x1, x2;

  printf("Program calculate square equation ax2+bx+c=0\n");
  printf("Input a b c : ");
  scanf("%d %d %d", &a, &b, &c);
  res = calculateSquareEquation(a, b, c, &x1, &x2);
  // printf("%d", res);
  switch (res) {
    case -1:
      printf("No roots");
      break;
    case 0:
      printf("One root x = %.2f", x1);
      break;
    case 1:
      printf("Two roots x1 = %.2f x2 = %.2f", x1, x2);
      break;
    default:
      printf("Error");
  }

  return 0;
}

int calculateSquareEquation(int a, int b, int c, float *x1, float *x2) {
  double D = b * b - 4 * a * c; // discriminant
  if (a == 0) {
    *x1 = (float)-c / b;
    return 0;
  } else if (D > 0) {
    *x1 = (-b + sqrt(D)) / (2 * a);
    *x2 = (-b - sqrt(D)) / (2 * a);
    return 1;
  } else if (D == 0) {
    *x1 = (float)-b / (2 * a);
    return 0;
  } else {
    // D < 0
    return -1;
  }
  return 1;
}


/*
2017 [geekbrains] Основы языка Си
Урок 10. Домашняя работа
31.c 7:00

Задание 1.
Используя заголовочный файл <math.h>, описать функцию,
int calculateSquareEquation(int a, int b, int c, float *x1, float *x2);
Которая будет решать квадратное уравнение вида ax2+bx+c=0
и записывать корни в переменные, с адресами x1 и x2. Функция должна вернуть -1 если уравнение не имеет корней, 0 если имеет один корень, 1 если имеет два корня
*/

#include <stdio.h>

int main() {
  double a, b, res;
  int operator;
  char sign = '0';

  printf("Input first number : ");
  scanf("%lf", &a);
  printf("Input 1 for +, 2 for -, 3 for *, 4 for / : ");
  scanf("%d", &operator);
  if (operator == 4) {
    do {
      printf("Input second number : ");
      scanf("%lf", &b);
    } while (b == 0);
  } else {
    printf("Input second number : ");
    scanf("%lf", &b);
  }

  switch (operator) {
    case 1:
      sign = '+';
      res = a + b;
      break;
    case 2:
      sign = '-';
      res = a - b;
      break;
    case 3:
      sign = '*';
      res = a * b;
      break;
    case 4:
      sign = '/';
      res = a / b;
      break;
    default: printf("operator must be 1 - 4");
  }

  if (sign != '0') {
    printf("%.2f %c %.2f = %.2f", a, sign, b, res);
  }

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 5. Циклы. Как придать уникальности простым вещам
13.c 18:00

Оператор switch. Калькулятор
*/

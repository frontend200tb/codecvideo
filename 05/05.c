#include <stdio.h>

int main() {
  int a = 10, b = 20, c;
  c = a > b ? a : b;

  printf("Maximum from a = %d, b = %d is c = %d\n", a, b, c);
  printf("%s", a > b ? "true" : "false");

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 3. Условия первый шаг к принятию решений. Булева алгебра
05.c 4:00
*/

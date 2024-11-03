#include <stdio.h>
#include <stdlib.h>

struct fraction { // дробь
  int integer;    // целая часть
  int divisible;  // делимое
  int divisor;    // делитель
};

typedef struct fraction Fraction;

void printFraction(Fraction f);

int main() {
  Fraction f1; // -1 1/5
  Fraction f2; //  1 1/5
  Fraction result;
  f1.integer = -1;
  f2.integer = 1;
  f1.divisible = 1;
  f2.divisible = 1;
  f1.divisor = 5;
  f2.divisor = 5;

  printFraction(f1);
  puts(""); // пустая строка
  printFraction(f2);

  return 0;
}

void printFraction(Fraction f) {
  if (f.divisible != 0) {
    if (f.integer == 0) {
      printf("%d/%d", f.divisible, f.divisor);
    } else {
      printf("%d  %d/%d", f.integer, f.divisible, f.divisor);
    }
  } else {
      printf("%d", f.integer);
  }
}


/*
2017 [geekbrains] Основы языка Си
Урок 12. Структуры данных. Уходим от примитивов к объектам, но не далеко
40.c 6:00

Структуры данных внутрь функций можно передавать как по значению так и по ссылке
Напишем структуру данных - простая дробь
*/

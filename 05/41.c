#include <stdio.h>
#include <stdlib.h>

struct fraction { // дробь
  int integer;    // целая часть
  int divisible;  // делимое
  int divisor;    // делитель
};

typedef struct fraction Fraction;

void printFraction(Fraction f);
void multFraction(Fraction f1, Fraction f2, Fraction *result);

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
  puts("");
  multFraction(f1, f2, &result);
  printFraction(result);

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

void multFraction(Fraction f1, Fraction f2, Fraction *result) {
  result->integer = f1.integer * f2.integer;
  result->divisible = f1.divisible * f2.divisible;
  result->divisor = f1.divisor * f2.divisor;
}


/*
2017 [geekbrains] Основы языка Си
Урок 12. Структуры данных. Уходим от примитивов к объектам, но не далеко
41.c 8:00

Чтобы не перепутать локальные структуры и указатели на внешние структуры, доступ к полям внутри указателей на структуры получают при помощи стрелочки ->
*/

#include <stdio.h>

int main() {
  int Ui, Uo, R1, R2;

  printf("Input volt (1 - 220) : ");
  scanf("%d", &Ui);
  printf("Output volt (1 - 36) : ");
  scanf("%d", &Uo);
  printf("R1 (1 - 20000) : ");
  scanf("%d", &R1);

  R2 = (Ui - Uo) * R1 / Uo;
  printf("R2 = %d", R2);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 5. Решение домашнего задания
14.c 0:30

Расчет резисторного делителя
Uo = Ui * (R1 / (R1 + R2))
Ui = Uo * (R1 + R2) / R1
R1 = R2 * Uo / (Ui - Uo)
R2 = (Ui - Uo) * R1 / Uo
*/

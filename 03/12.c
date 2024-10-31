#include <stdio.h>
#define TAX (13 + 1 + 25)
#define TAX2 (13 + 1 + 33)
#define SALARY 328000

int countIncome();
int countIncome2();

int main()
{
  printf("%d\n", countIncome());
  printf("%d\n", countIncome2());
  printf("%d\n", STDIN_FILENO);

  return 0;
}

int countIncome()
{
  // доход равен заработку минус подоходный налог
  // минус профсоюзные и минус алименты
  return SALARY - SALARY * TAX / 100;
}

int countIncome2()
{
  return SALARY - SALARY * TAX2 / 100;
}

// #12. Константы
/*
STDIN_FILENO константа равная 0, определена в stdio.h
*/
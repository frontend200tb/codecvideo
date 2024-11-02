#include <stdio.h>

int main()
{
  int true = 1, false = 0;

  printf("true && true %d\n", true & true);
  printf("true && false %d\n", true && false);
  printf("false && true %d\n", false && true);
  printf("false && false %d\n", false && false);

  printf("true || true %d\n", true || true);
  printf("true || false %d\n", true || false);
  printf("false || true %d\n", false || true);
  printf("false || false %d\n", false || false);

  printf("!true %d\n", !true);
  printf("!false %d\n", !false);

  return 0;
}

// 15. Логические значения
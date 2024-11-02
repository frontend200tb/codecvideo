#include <stdio.h>
#define A 10
#define SUM(a, b) (a+b)*2 // макрос
#define P 2

int main()
{
  printf("%d\n", A);
  #undef A
  // printf("%d\n", A); // не скопмилируется

  int c = 5;
  int d = 10;
  printf("%d\n", SUM(c, d));

  #if P == 1
  printf("P = %d\n", P);
  #elif P == 2
  printf("P = %d\n", P);
  #else
  printf("P = %d\n", P);
  #endif
  return 0;
}

// 13. Отладка с помощью определений препроцессора
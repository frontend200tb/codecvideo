#include <stdio.h>

void recur(int);

int main()
{
  printf("5 times recursion ");
  recur(5);

  return 0;
}

void recur(int a) {
  printf("%d ", a);
  a--;
  if(a < 1) {
    return;
  } else {
    recur(a);
  }
}

// 24. Функции, рекурсия
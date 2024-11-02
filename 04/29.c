#include <stdio.h>
#define SIZE 5

int main()
{
  int a[SIZE] = {10,20,30,40,50};
  int *pa0 = &a[0];
  int *pa1 = &a[1];
  int *pa2 = &a[2];
  int *pa3 = &a[3];
  int *pa4 = &a[4];
  int *pas[SIZE] = {pa0, pa1, pa2, pa3, pa4};

  for(int i = 0; i < SIZE; i++) {
    printf("%d pa = %p a = %d\n", i, pas[i], a[i]);
  }

  char *pb[SIZE] = {"I ", "love ", "code ", "with ", "c"};

  for(int i = 0; i < SIZE; i++) {
    printf("%s", pb[i]);
  }

  return 0;
}

// 29. Массивы указателей в языке Си
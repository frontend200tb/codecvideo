#include <stdio.h>

int main()
{
  char a = 1;
  char b = 2;
  char *pa = NULL;
  char *pb = NULL;
  pa = &a;
  pb = &b;
  printf("a = %d &a = %p\n", a, &a);
  printf("b = %d &b = %p\n", b, &b);
  printf("*pa = %d pa = %p &pa = %p\n", *pa, pa, &pa);
  printf("*pb = %d pb = %p &pb = %p\n", *pb, pb, &pb);

  *pa = 10;
  *pb = 20;
  printf("a = %d &a = %p\n", a, &a);
  printf("b = %d &b = %p\n", b, &b);

  return 0;
}

// #14. Указатели
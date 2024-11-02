#include <stdio.h>

void fx(int*);
void fy(int*);

int main()
{
  int a = 10;
  int *pa = &a;

  printf("a = %d &a = %p\n", a, &a);
  printf("*pa = %d pa = %p\n", *pa, pa);

  fx(pa);
  printf("a = %d &a = %p\n", a, &a);
  printf("*pa = %d pa = %p\n", *pa, pa);

  fy(pa);
  printf("a = %d &a = %p\n", a, &a);
  printf("*pa = %d pa = %p\n", *pa, pa);

  return 0;
}

void fx(int *px) {
  *px = *px + *px;
}

void fy(int *py) {
  *py = *py * *py;
}

// 28. Передача указателей в функции в языке Си
#include <stdio.h>

int main()
{
  // указатель на переменную типа int, будет хранить ее адрес
  int *pa;
  int a = 10;
  pa = &a;

  printf("&a = %p a = %d\n", &a, a);
  printf("pa = %p *pa = %d\n", pa, *pa);

  int *pb;
  int b[] = {1, 2, 3};
  pb = b;

  printf("b = %p b[0] = %d\n", b, b[0]);
  printf("pb = %p *pb = %d\n", pb, *pb);

  for(int i = 0; i < 3; i++) {
    printf("pb = %p *pb = %d\n", pb + i, *pb + i);
  }

  return 0;
}

// 27. Указатели в языке Си
/*
переменная типа указатель хранит адрес другой переменной
*/
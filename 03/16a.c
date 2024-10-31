#include <stdio.h>

void showAdress(short []);
void showAdress2(short *);

int main()
{
  short prices[5] = {10, 20, 30, 40, 50};

  printf("index access\n");
  printf("0 - %d\t", prices[0]);
  printf("1 - %d\t", prices[1]);
  printf("2 - %i\t", prices[2]);
  printf("3 - %i\n", prices[3]);

  printf("pointer access\n");
  printf("0 - %d\t", *prices);
  printf("0 - %d\t", *(prices + 0));
  printf("1 - %d\t", *(prices + 1));
  printf("2 - %d\t", *(prices + 2));
  printf("3 - %d\n", *(prices + 3));

  showAdress(prices);
  showAdress2(prices);

  return 0;
}

void showAdress(short a[])
{
  printf("Array adress by index access\n");
  printf("0 - %p\t", &a[0]);
  printf("1 - %p\t", &a[1]);
  printf("2 - %p\t", &a[2]);
  printf("3 - %p\n", &a[3]);
}

void showAdress2(short *a)
{
  printf("Array adress by pointer access\n");
  printf("0 - %p\t", a);
  printf("1 - %p\t", a + 1);
  printf("2 - %p\t", a + 2);
  printf("3 - %p\n", a + 3);
}

// #16. Массивы. Часть 2
/*
доступ к элементам массива через [] это синтаксический сахар и работает медленнее чем доступ через адресс
prices[1] = *(prices+1)
*/
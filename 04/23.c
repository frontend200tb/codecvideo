#include <stdio.h>

void myprint(char []);
int cube(int);

int main()
{
  char a[10] = "function";
  myprint(a);
  printf("cube 10 = %d\n", cube(10));

  return 0;
}

void myprint(char str[]) {
  printf("%s\n", str);
}

int cube(int a) {
  return a * a * a;
}

// 23. Функции, передача аргументов в функции
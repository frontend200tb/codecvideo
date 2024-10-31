#include <stdio.h>

int main() {
  // переменные для размеров различных типов данных
  size_t c = sizeof(char);
  size_t sh = sizeof(short);
  size_t i = sizeof(int);
  size_t f = sizeof(float);
  size_t d = sizeof(double);

  // переменные для массивов различных типов данных
  char ac[] = {1,2,3,4,5};
  short ash[] = {1,2,3,4,5};
  int ai[] = {1,2,3,4,5};
  float af[] = {1,2,3,4,5};
  double ad[] = {1,2,3,4,5};

  // размер типа
  printf("char size - %zu\n", c);
  printf("short size - %zu\n", sh);
  printf("int size - %zu\n", i);
  printf("float size - %zu\n", f);
  printf("double size - %zu\n", d);

  // размер массива
  printf("array char 5 el size - %zu\n", sizeof(ac));
  printf("array short 5 el size - %zu\n", sizeof(ash));
  printf("array int 5 el size - %zu\n", sizeof(ai));
  printf("array float 5 el size - %zu\n", sizeof(af));
  printf("array double 5 el size - %zu\n", sizeof(ad));

  return 0;
}

// #16. Массивы. Часть 2
#include <stdio.h>

void swap(int*, int*);
void swap2(int*, int*);

int main() {
  int a = 50, b = 100;
  printf("a = %d b = %d\n", a, b);

  swap(&a, &b);
  printf("a = %d b = %d\n", a, b);

  swap2(&a, &b);
  printf("a = %d b = %d\n", a, b);

  return 0;
}

void swap(int *pa, int *pb) {
  *pa = *pa + *pb;
  *pb = *pa - *pb;
  *pa = *pa - *pb;
}

void swap2(int *pa, int *pb) {
  *pa ^= *pb;
  *pb ^= *pa;
  *pa ^= *pb;
}


/*
2017 [geekbrains] Основы языка Си
Урок 7. Указатели. Ещё один шаг к настоящему низкому уровню
23.c 6:00

Функция swap меняет значения двух переменных местами
Это возможно благодаря передачи аргументов по ссылке а не по значению
*/

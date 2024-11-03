#include <stdio.h>
#include <stdlib.h>

int main() {
  const int SIZE = 10;
  int *area = (int*) calloc(SIZE, sizeof(int));
  int i;
  // убедимся что память заполнилась нулями
  for (i = 0; i < SIZE; i++) {
    printf("%d ", *(area + i));
  }
  free(area);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 14. Динамическое выделение памяти
45.c 6:00

Функция calloc из билиотеки <stdlib.h>
void calloc(count, sizeOneCount);
Выделяется область памяти и заполняется нулями
*/

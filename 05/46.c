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
  puts("");
  int newSize = SIZE + 10;
  // добавим еще памяти
  area = realloc(area, sizeof(int) * newSize);
  // выведем то что было в добавленной памяти
  for (i = 0; i < newSize; i++) {
    printf("%d ", *(area + i));
  }
  free(area);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 14. Динамическое выделение памяти
46.c 8:00

Функция realloc из билиотеки <stdlib.h>
void realloc(area, newSize);
Изменяем размер выделенной области памяти
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  const int SIZE = 10;
  int arr[SIZE];
  int i;
  // заполним массив
  for (i = 0; i < SIZE; i++) {
    arr[i] = i*10 + 2;
    printf("%d ", arr[i]);
  }
  puts("");

  int *area = (int*) malloc(SIZE * sizeof(int));
  // почти тоже что int array[10]
  // выведем что было в памяти
  for (i = 0; i < SIZE; i++) {
    printf("%d ", *(area + i));
  }
  // заполним и выведем
  for (i = 0; i < SIZE; i++) {
    *(area + i) = i*10 + 5;
    printf("%d ", *(area + i));
  }
  free(area);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 14. Динамическое выделение памяти
44.c 5:00

Функция malloc из билиотеки <stdlib.h>
void malloc(<memory size>);
выделяется область памяти без инициализации
*/

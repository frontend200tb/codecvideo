#include <stdio.h>

int main() {
  int i;
  char d[10] = {'a', 'b', 'c', '\0'};
  char *s = "abc";

  for (i = 0; i < 3; i++) {
    printf("%d %c\n", i, d[i]);
  }

  for (i = 0; i < 3; i++) {
    printf("%d %c\n", i, s[i]);
  }

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 08 Классы памяти.wmv
2:37

Создадим строку двумя способами
1. массив символов
2. указатель на память
*/
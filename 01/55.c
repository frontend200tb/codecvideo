#include <stdio.h>

int main(int argc, char *argv[]) {
  int i;
  printf("%d parameter(s)\n", argc);

  for (i = 0; i < argc; i++) {
    printf("%d %s\n", i, argv[i]);
  }

  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 08 Классы памяти.wmv
2:41

Параметры функции int main(int argc, char *argv[])
*/
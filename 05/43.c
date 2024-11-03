#include <stdio.h>

int main() {
  char word[256];
  FILE *f;
  f = fopen("text.txt", "r");
  while (!feof(f)) {
    fscanf(f, "%s", &word);
    printf("%s ", word);
  }
  fclose(f);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 13. Файловая система. Запоминаем результаты и читаем их обратно
43.c 6:00

Чтение из файла
*/

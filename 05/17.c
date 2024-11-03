#include <stdio.h>

int main() {
  const char SYM = '^';
  int lines, i, j;

  do {
    printf("Input count lines (1-20)");
    scanf("%d", &lines);
  } while (lines > 20 || lines < 1);

  for (i = 0; i < lines; i++) {
    for (j = 1; j < lines - i; j++) {
      printf(" ");
    }
    for (j = lines - i*2; j <= lines; j++) {
      printf("^");
    }
    printf("\n");
  }

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 5. Решение домашнего задания
17.c 7:00

Ввести количество строк. Нарисовать на этих строках
равнобедренный треугольник символом ^
*/

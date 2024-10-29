#include <stdio.h>
#include <stdlib.h>

void Mirror(char*);

int main() {
  char *s1 = "abc123";
  Mirror(s1);

  return 0;
}

void Mirror(char* s) {
  char c = *s++;
  if (*s) Mirror(s);
  putchar(c);
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 10 Составные типы данных.wmv
0:06

Написать функцию, которая принимает строку,
и печатает ее в обратном порядке
*/
#include <stdio.h>
#include <stdlib.h>

void Copy(char*, char*);

int main() {
  char *s1 = "abc";
  char *s2 = "12345";
  Copy(s1, s2);

  printf("%s\n", s1);

  return 0;
}

void Copy(char* s1, char* s2) {
  while (*s1++ = *s2++);
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 10 Составные типы данных.wmv
0:05

Написать функцию, которая принимает две строки,
копирует вторую строку в первую
*/
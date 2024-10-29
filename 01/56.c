#include <stdio.h>
#include <stdlib.h>

int stringLen(char*);

int main() {
  char *s1 = "abcd";
  int len = stringLen(s1);
  printf("len = %d\n", len);

  return 0;
}

int stringLen(char* s) {
  int i = 0;

  if (s == NULL) return -1;
  while (s[i] != '\0') i++;
  return i;
}




/*
2011 [Кораблин] Программирование на языке Си
Модуль 09 Файлы.wmv
0:28

Написать функцию, которая принимает строку и возвращает ее длину
*/
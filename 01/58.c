#include <stdio.h>
#include <stdlib.h>

int strToInt(char *, int, int, int*);
int strLen(char*);

int main() {
  char tmp[255];
  int res;

  printf("input number (1-15) ");
  scanf("%s", tmp);
  int n = strToInt(tmp, 1, 15, &res);
  if (n == -1) {
    printf("must be integer\n");
  } else if (n == -3 || n == -5) {
    printf("must be 1-15\n");
  } else {
    printf("result = %d\n", res);
  }

  return 0;
}

int strToInt(char *s, int min, int max, int *pres) {
  int n = 0, res = 0;

  // есть строка, есть результат, max>min
  if (s == NULL || pres ==NULL || max < min) n = -13;
  else {
    // это число
    res = atoi(s);
    if (res == 0) {
      if(strLen(s) == 1 && s[0] == '0') {
        // это ноль
        *pres = 0;
      } else {
        // это неправильный ввод
        n = -1;
      }
    } else {
      // >=min
      if (res < min) n = -3;
      // <= max
      else if (res > max) n = -5;
        else *pres = res;
    }
  }
  return n;
}

int strLen(char* s) {
  int i = 0;

  if (s == NULL) return -1;
  while (s[i] != '\0') i++;
  return i;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 09 Файлы.wmv
1:50

Написать функцию, которая принимает строку,
и преобразует ее в число
*/
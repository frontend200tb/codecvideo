#include <stdio.h>
#include <string.h>

int main()
{
  char a[50] = "I learn C";
  char b[] = "programming language";
  char c[50] = "I write";
  char d[] = "code";
  char e[50] = "We work on";
  char f[] = "LiLiLinux";

  printf("%s %s\n%s %s\n%s %s\n\n", a, b, c, d, e, f);

  strcat(a, b); // a = a + b
  printf("%s\n", a);

  strncat(c, d, 4);
  strncat(e, f+4, 5);
  printf("%s\n%s\n", c, e);

  return 0;
}

// 31. Строки, функции strcat, strncat в языке Си
/*
strcat(a,b) к первой строке присоединяет вторую
strncat(c, d, 4); к первой строке присоединяет 4 символа второй строки
strncat(c, d+3, 4); к первой строке присоединяет 4 символа второй строки начиная с 3 символа
*/
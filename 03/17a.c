#include <stdio.h>

int main()
{
  //массив символов станет строкой только
  //если заканчивается на символ '\0'
  char s1[] = { 'H', 'e', 'l', 'l', 'o', '1', '\0'};
  char s2[] = "Hello2"; // компилятор сам добавит '\0'
  const char *s3 = "Hello3";
  const char *s4 = "Hello4";

  // строка и ее адрес
  printf("1 %s %p\n", s1, s1); // 7 байт
  printf("2 %s %p\n", s2, s2); // 7 байт
  printf("3 %s %p\n", s3, s3); // 7 байт
  printf("4 %s %p\n", s4, s4); // 7 байт

  // первый символ строки
  printf("1 %c\n", *s1); // 1 байт
  printf("2 %c\n", *s2); // 1 байт
  printf("3 %c\n", *s3); // 1 байт
  printf("4 %c\n", *s4); // 1 байт

  s4 = s3;
  printf("4 %s %p\n", s4, s4); // 7 байт

  return 0;
}

// #17. Строки. Часть 1

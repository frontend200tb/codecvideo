#include <stdio.h>

typedef struct // плохая практика
{
  char str[5];
} ArrType;

typedef struct // хорошая практика
{
  char *str;
} PtrType;

ArrType a = {{'A', 'B', 'C', 'D', '\0'}};
PtrType b = {"abcd"};

int main()
{
  printf("Array of char\n");
  printf("a %s\n", a.str);

  // посимвольно меняем массив символов
  a.str[0] = 'x';
  a.str[1] = 'y';
  a.str[2] = 'z';
  a.str[3] = 'z';
  printf("a %s\n", a.str);

  // в цикле посимвольно меняем массив символов
  char *pa = "Idea";
  for(int i = 0; i < 5; i++) {
    a.str[i] = *pa++;
  }
  printf("a %s\n", a.str);

  printf("\nPointer\n");
  printf("b %s\n", b.str);
  printf("pointer b %p\n", b.str);

  // меняем указатель на новую строку
  b.str = "Idea";
  printf("b %s\n", b.str);
  printf("pointer b %p\n", b.str);

  return 0;
}

// 35. Структуры в языке Си объявление указателей в структуре
/*
l-value = r-value
l-value это переменные или указатели
r-value это значения или выражения
l-value можно записать справа от знака равно
r-value нельзя записать слева от знака равно
*/
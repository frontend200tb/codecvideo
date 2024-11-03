#include <stdio.h>

int main() {
  char string1[256];
  gets(string1);
  puts(string1);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 11. Строки. Учимся говорить с пользователем
36.c 4:00

Функция gets() считывает строку из консоли (до нажатия Enter) и записывает в переменную
*/

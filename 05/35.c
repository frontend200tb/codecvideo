#include <stdio.h>

char* string3() {
  return "chuwi core pro";
}

int main() {
  char string1[256] = "notebook digma pro";
  char* string2 = "thinkpad t470";

  puts(string1);
  puts(string2);
  puts(string3());

  string1[5] = 'X';
  puts(string1);
  puts("asus");


  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 11. Строки. Учимся говорить с пользователем
35.c 3:30

Функция puts() для вывода строк в консоль
Добавляет символ конца строки '\0' и не умеет работать с аргументами
*/

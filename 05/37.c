#include <stdio.h>
#include <string.h>

char* hello(char* name) {
  char welcome[256] = "Hello, ";
  return strcat(welcome, name);
}

int main() {
  char name[256];
  puts("Input your name");
  gets(name);
  puts(hello(name));

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 11. Строки. Учимся говорить с пользователем
37.c 5:00

Функция принимает имя и возвращает приветствие
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void hello(char* name, char* out) {
  char welcome[256] = "Hello, ";
  name[0] = tolower(name[0]);
  if (strcmp("ivan", name) == 0) {
    strcpy(name, "Master!");
  }
  name[0] = toupper(name[0]);
  strcat(welcome, name);
  strcpy(out, welcome);
}

int main() {
  char name[256];
  char t[256];
  puts("Input your name");
  gets(name);
  hello(name, t);
  puts(t);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 11. Строки. Учимся говорить с пользователем
38.c 7:00

Функция принимает имя и указатель на строку. изменяет строку и ничего не возвращает
*/

#include <stdio.h>

char* string3() {
  return "chuwi core pro";
}

int main() {
  char string1[256] = "notebook digma pro";
  char* string2 = "thinkpad t470";

  printf("%s\n", string1);
  printf("%s\n", string2);
  printf("%s\n", string3());

  string1[5] = 'X';
  printf("%s\n", string1);


  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 11. Строки. Учимся говорить с пользователем
34.c 3:00

В языке Си строки можно описать двумя способами
1 Как массив из переменных типа char
2 Как указатель на тип char
*/

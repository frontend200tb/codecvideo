#include <stdio.h>
#include <stdlib.h>

// isalpha() возвращает true если это символ из алфавита
// isdigit() если цифра
// isspace() если пробел
// isupper() если в верхнем регистре
// islower() если в нижнем регистре
// toupper() переводит в верхний регистр
// tolower() переводит в нижний регистр
// atoi() переводит в тип integer
// atof() переводит в тип float

int main() {
  char num[64];
  puts("Input number");
  gets(num);
  int number = atoi(num);
  printf("number * 2 = %d", number * 2);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 11. Строки. Учимся говорить с пользователем
39.c 11:00

<stdlib.h> библиотека для работы с символами
*/

#include <stdio.h>

int main() {
  int i;
  char *string[3] = {"Hello", "C", "World"};

  for (i = 0; i < 3; i++){
    printf("%s ", string[i]);
  }

  return 0;
}



/*
2017 [geekbrains] Основы языка Си
Урок 10. Массивы. Почти безграничные возможности организации данных
30.c 6:00

char *string[3] указатель на строки
в этом массиве каждый элемент разного размера
*/

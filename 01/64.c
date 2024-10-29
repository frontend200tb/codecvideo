#include <stdio.h>

int main() {
  enum season {winter, spring, summer = 6, autumn};
  enum week {mon = -7, tue, wen, thu, fry, sat, sun};
  enum bool {false, true};

  printf("winter = %d\n", winter);
  printf("spring = %d\n", spring);
  printf("summer = %d\n", summer);
  printf("autumn = %d\n", autumn);

  printf("monday = %d\n", mon);
  printf("sunday = %d\n", sun);

  printf("false = %d\n", false);
  printf("true = %d\n", true);
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 10 Составные типы данных.wmv
2:05

Перечислимый тип
*/
#include <stdio.h>

#define TEST
//#undef TEST

int main() {
  printf("start program\n");

#ifdef TEST
  printf("test mode\n");
  printf("test mode\n");
  printf("test mode\n");
#endif

  printf("work\n");
  printf("end program\n");
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 04 Препроцессор.wmv
1:41
*/
#include <stdio.h>

int main() {
  printf("%llu %llu %llu\n", sizeof(int*), sizeof(char*), sizeof(void*)); // три размера трех разных указателей
  // любой указатель в 32 разрядной ОС занимает 4 байта
  // любой указатель в 64 разрядной ОС занимает 8 байт

  printf("%llu %llu %llu\n", sizeof(int), sizeof(char), sizeof(char));  // три размера трех разных типов данных
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 06 Адресная арифметика.wmv
0:15
*/
#include <stdio.h>

int main()
{

  printf("char %c\t", 'A');
  char ch = 'B';
  printf("char %c\t", ch);
  printf("char %c\t", 100);
  char ch1 = 101;
  printf("char %c\n", ch1);

  printf("1 byte %d\t", 'A');
  printf("1 byte %d\n", ch);

  printf("2 bytes %hi\t", 1000);
  short sh = 2000;
  printf("2 bytes %hi\t", sh);
  printf("2 bytes %hd\t", 1000);
  printf("2 bytes %hd\n", sh);

  printf("4 bytes %i\t", 35000);
  int in = 36000;
  printf("4 bytes %i\t", in);
  printf("4 bytes %d\t", 35000);
  printf("4 bytes %d\n", in);

  return 0;
}

// 03. Переменные, вывод информации и ввод в Терминале в языке Си
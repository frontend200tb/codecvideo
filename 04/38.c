#include <stdio.h>

int main()
{
  char a[100];
  FILE *pr = fopen("38a.txt", "r");
  FILE *pw = fopen("38b.txt", "w");
  int len = fread(a, 1, 100, pr);
  printf("%s\n", a);
  printf("Read %d symbols\n", len);
  fwrite(a, 1, len, pw);

  return 0;
}

// 38. Работа с файлами в языке Си  функции fread, fwrite
/*
Скопируем содержимое одного файла в другой файл
fread()
fwrite()
*/
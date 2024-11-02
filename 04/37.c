#include <stdio.h>

int main()
{
  char a[100] = "data from file";
  char b[100] = "forever one";
  char c[100], d[100];
  FILE *pfa, *pfb; // указатель на файл

  pfa = fopen("37a.txt", "w+r");
  pfb = fopen("37b.txt", "w+r");
  fputs(a, pfa);
  fputs(b, pfb);

  fgets(c, 100, pfa);
  fgets(d, 100, pfb);

  printf("%s\n", c);
  printf("%s\n", d);

  return 0;
}

// 37. Работа с файлами в языке Си
/*
FILE * тип данных указатель на файл
fopen(имя файла, режим)
режим
r read чтение
w write запись
a append дозапись в конец
r+ чтение или запись в текстовый файл
w+ чтение или запись в текстовый файл
a+ чтение или дозапись в конец текстового файла
rb чтение бинарного файла
wb запись в бинарный файл
*/
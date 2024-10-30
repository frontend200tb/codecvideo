#include <stdio.h>

int main() {
  FILE *file = fopen("data.txt", "w");
  fprintf(file, "notebook\nDigma Pro");
  fclose(file);

  file = fopen("data.txt", "a");
  fprintf(file, " model");
  fclose(file);

  return 0;
}


/*
#9 - Работа с файлами.mp4
27.с 6:00
*/
#include <stdio.h>

int main() {
  char line[255];
  FILE *file = fopen("data.txt", "w");
  fprintf(file, "notebook\nDigma Pro");
  fclose(file);

  file = fopen("data.txt", "r");
  fgets(line, 255, file);
  printf("%s", line);
  fgets(line, 255, file);
  printf("%s", line);
  fclose(file);

  return 0;
}


/*
#9 - Работа с файлами.mp4
28.с 9:00
*/
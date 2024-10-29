#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Save(char *, int *, int);
int Load(char *);

int main() {
  int data[10] = {1,5,2,7,4,4,3,2,6,7};

  Save("data.dt", data, 10);
  Load("data.dt");
  return 0;
}

int Save(char *name, int *d, int n) {
  int i;
  FILE *pf = fopen(name, "w");

  if (pf == NULL) return -1;
  for (i = 0; i < n; i++) {
    //fprintf(stdout, "%d ", d[i]); // выводим на экран
    fprintf(pf, "%d ", d[i]); // записываем в файл
  }
  fclose(pf); pf = NULL;
  return 0;
}

int Load(char *name) {
  int num, res;
  FILE *pf = fopen(name, "r");

  if (pf == NULL) return -1;

  do {
    res = fscanf(pf, "%d", &num);
    if (res == 1) fprintf(stdout, "%d ", num); // выводим на экран
  } while (res != EOF);

  fclose(pf); pf = NULL;
  return 0;
}


/*
2011 [Кораблин] Программирование на языке Си
Модуль 10 Составные типы данных.wmv
1:50

Создать две функции Save() и Load()
Save() записывает данные в файл
Load() выводит на экран данные из файла
*/
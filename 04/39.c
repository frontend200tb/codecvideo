#include <stdio.h>
#include <string.h>
#include <errno.h>

void fa();

int main()
{
  FILE *pf;
  pf = fopen("39a.txt", "r"); // нет такого файла, вернет NULL
  if(pf != NULL) {
    printf("Read success");
  } else {
    perror("Read error");
  }

  fa();

  return 0;
}

void fa() {
  for(int i = 0; i < 44; i++) {
    printf("Error %d: %s\n", i, strerror(i));
  }
}

// 39. Сообщения об ошибках
/*
perror() принимает строку и выводит сообщение об ошибке
strerror() по номеру ошибки возвращает ее описание
*/
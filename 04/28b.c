#include <stdio.h>
#define SIZE 100

void shifr(char []);

int main()
{
  char str[SIZE];

  printf("Enter string to shifr: ");
  fgets(str, SIZE, stdin);
  printf("Source string: %s", str);
  shifr(str);
  printf("Shifred string: %s\n", str);
  shifr(str);
  printf("Unshifred string: %s", str);

  return 0;
}

void shifr(char s[]) {
  while(*s) {
    *s = *s ^ 31;
    s++;
  }
}

// будем шифровать строку и расшифровывать ее
/*
gets() непрофессиональная функция у которой есть проблемы с безопасностью, ее нельзя использовать никогда.
потому что она не контролирует количество введенных символов
*/
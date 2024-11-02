#include <stdio.h>

int main()
{
  char a[10];

  printf("Enter string: ");
  fgets(a, 10, stdin);
  fputs(a, stdout);

  for(char b = 'A'; b <= 'Z'; b++) {
    printf("%c ", b);
  }

  for(char b = 'a'; b <= 'z'; b++) {
    printf("%c ", b);
  }

  return 0;
}

// 30. Функции ввода и вывода строк в языке Си
/*
fgets(a) читает все символы до \n
но  в массив записывает не более 10 символов
это правильные функции и правильный подход
чтобы не было переполнения и чтобы программа не рухнула
*/
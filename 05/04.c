#include <stdio.h>

int main() {
  char answer;
  printf("Do you want me to salute you? (y/n) ");
  scanf("%c", &answer);
  if (answer == 'y') {
    printf("Hello\n");
  } else if (answer =='n') {
    printf("I didn't want to salute you anyway!");
  } else {
    printf("I can't undersand");
  }
  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 3. Условия первый шаг к принятию решений. Булева алгебра
03.c 2:00
*/

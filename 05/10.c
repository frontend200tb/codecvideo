#include <stdio.h>

int main() {
  int input;

  do {
    printf("Enter positive number ");
    scanf("%d", &input);
  } while (input < 1);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 4. Циклы. Отдаём программе рутинные задачи
10.c 4:00

Если число отрицательное или 0, то цикл будет выполняться
*/

/*
Циклы с пост условием do while применяются для проверки пользовательского ввода до приемлиевого результата
*/
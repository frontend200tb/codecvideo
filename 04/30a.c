#include <stdio.h>

int main()
{
  char a[10];

  printf("Enter string (max 10 sym): ");
  // считает все символы до первого пробела
  scanf("%s", a);
  printf("%s\n", a);

  return 0;
}

// 30. Функции ввода и вывода строк в языке Си
/*
scanf("%s") читает все символы до первого пробела
если ввести больше символов чем размер массива,
то выскочит ошибка Segmentation fault и программа завершится аварийно
*/
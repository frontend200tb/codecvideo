#include <stdio.h>

int main()
{
  char a[10];

  printf("Enter string: ");
  // регулярное выражение
  // считает все символы до ENTER
  scanf("%[^\n]", a);
  printf("%s\n", a);

  return 0;
}

// 30. Функции ввода и вывода строк в языке Си
/*
scanf("%[^\n]") читает все символы до \n
если ввести больше символов чем размер массива,
то выскочит ошибка Segmentation fault и программа завершится аварийно
*/
#include <stdio.h>

#define STO 100
#define PI 3.14
#define TITLE "title of the book"
#define LINE "______________"

int main()
{
  const int a = 1;
  const char b[] = "programming";

  printf("%d\n", STO);
  printf("%.2f\n", PI);
  printf("%s\n", TITLE);
  printf("%s\n", LINE);
  printf("%d\n", a);
  printf("%s\n", b);

  return 0;
}

// 11. Объявление констант
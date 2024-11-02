#include <stdio.h>

int main()
{
  fprintf(stdout, "while \"y\". Press any key\n");
  char a = 'y';
  while(a == 'y') {
    printf("Repeat?");
    scanf("%s", &a);
  }

  fprintf(stdout, "do while \"y\". Press any key\n");

  do {
    printf("Repeat?");
    scanf("%s", &a);
  } while(a == 'y');

  return 0;
}

// 20. Циклы while, do while
#include <stdio.h>

int main()
{
  printf("loop for from 0 to 5\n");
  for(int i = 0; i < 5; i++) {
    printf("%d ", i);
  }

  printf("\nloop for from 0 to 5. break if i = 3\n");
  for(int i = 0; i < 5; i++) {
    if(i == 3) {
      break;
    }
    printf("%d ", i);
  }

  printf("\nloop for from 0 to 5. continue if i = 3\n");
  for(int i = 0; i < 5; i++) {
    if(i == 3) {
      continue;
    }
    printf("%d ", i);
  }

  printf("\nloop for from 0 to 5. goto if i = 3\n");
  for(int i = 0; i < 5; i++) {
    if(i == 3) {
      goto metka;
    }
    printf("%d ", i);
  }
  printf("never"); // не будет напечатано
  metka:
  printf("\nfrom goto\n");

  return 0;
}

// 21. Утверждения break, continue, goto
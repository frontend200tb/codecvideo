#include <stdio.h>

void showChar1(char a[], int ln) {
  printf("Array Char 1 Adresses\n");
  for (int i = 0; i < ln; i++) {
    printf("%i - %p\n", i, &a[i]);
  }
}

void showChar2(char a[], int ln) {
  printf("Array Char 2 Adresses\n");
  for (int i = 0; i < ln; i++) {
    printf("%i - %p\n", i, a + i);
  }
}

void showChar3(char *p, int ln) {
  printf("Array Char 3 Adresses\n");
  for (int i = 0; i < ln; i++) {
    printf("%i - %p\n", i, p + i);
  }
}

int main() {
  char ac[] = {10,20,30};

  showChar1(ac, 3);
  showChar2(ac, 3);
  showChar3(ac, 3);

  return 0;
}

// #16. Массивы. Часть 2
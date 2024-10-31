#include <stdio.h>

void showArrayCAdr(char array[], int length) {
  printf("Array Char Adresses\n");
  for (int i = 0; i < length; i++) {
    printf("%i - %p\n", i, &array[i]);
  }
}

void showArrayShAdr(short array[], int length) {
  printf("Array Short Adresses\n");
  for (int i = 0; i < length; i++) {
    printf("%i - %p\n", i, &array[i]);
  }
}

void showArrayIAdr(int array[], int length) {
  printf("Array Int Adresses\n");
  for (int i = 0; i < length; i++) {
    printf("%i - %p\n", i, &array[i]);
  }
}

void showArrayFAdr(float array[], int length) {
  printf("Array Float Adresses\n");
  for (int i = 0; i < length; i++) {
    printf("%i - %p\n", i, &array[i]);
  }
}

void showArrayDAdr(double array[], int length) {
  printf("Array Double Adresses\n");
  for (int i = 0; i < length; i++) {
    printf("%i - %p\n", i, &array[i]);
  }
}

void showArrayDAdrPointer(double *p, int length) {
  printf("Array Double Adresses\n");
  for (int i = 0; i < length; i++) {
    printf("%i - %p\n", i, &p[i]);
  }
}

int main() {

  // переменные для массивов различных типов данных
  char ac[] = {1,2,3,4,5};
  short ash[] = {1,2,3,4,5};
  int ai[] = {1,2,3,4,5};
  float af[] = {1,2,3,4,5};
  double ad[] = {1,2,3,4,5};

  showArrayCAdr(ac, 5);
  showArrayShAdr(ash, 5);
  showArrayIAdr(ai, 5);
  showArrayFAdr(af, 5);
  showArrayDAdr(ad, 5);
  showArrayDAdrPointer(ad, 5);

  return 0;
}

// #16. Массивы. Часть 2
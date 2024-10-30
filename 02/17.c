#include <stdio.h>

int main() {
  int arr[] = {2, 67, 0, -2, 6};
  int min = arr[0];
  int max = arr[0];

  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
    if (arr[i] < min) {
      min = arr[i];
    }
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  printf("\nmin %d ", min);
  printf("\nmax %d ", max);

  return 0;
}


/*
#5 - Циклы и операторы в них.mp4
17.с 25:00
*/
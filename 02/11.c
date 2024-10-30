#include <stdio.h>

int main() {
  int arr[2][3]; // двумерный массив
  arr[0][0] = 100;
  printf("%d\n", arr[0][0]);

  int arr2[2][3] = {
    {1, 2, 3},
    {10, 20, 30},
  };

  printf("%d\n", arr2[0][0]);

  return 0;
}


/*
#3 - Массивы данных.mp4
11.с 15:00
*/
#include <stdio.h>

int main() {
  int arr[5] = {};  // массив из 5 элементов типа int
  int arr2[] = {10,20,50}; // массив из 3 элементов
  int arr3[5] = {10,20,50}; // массив из 5 элементов

  scanf("%d", &arr3[3]);
  scanf("%d", &arr3[4]);

  printf("arr = %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
  printf("arr2 = %d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);
  printf("arr3 = %d %d %d %d %d\n", arr3[0], arr3[1], arr3[2], arr3[3], arr3[4]);

  return 0;
}


/*
#3 - Массивы данных.mp4
08.с 4:00
*/
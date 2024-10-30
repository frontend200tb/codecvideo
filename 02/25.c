#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num); // адрес
  printf("value %d\n", num); // значение
  printf("adress %p\n", &num); // адрес

  int *pnum = &num;
  printf("value %d = %d\n", num, *pnum); // значение
  printf("adress %p = %p\n", &num, pnum); // адрес

  *pnum = 10;
  printf("value %d = %d\n", num, *pnum); // значение
  printf("adress %p = %p\n", &num, pnum); // адрес

  return 0;
}


/*
#8 - Указатели в Си.mp4
25.с 9:00
*/
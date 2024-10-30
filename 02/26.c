#include <stdio.h>

struct Abstract {
  int width, height;
};

void calc(struct Abstract);
void calc2(struct Abstract*);

int main() {
  struct Abstract square = {2, 3};
  calc(square); // передача объекта в функцию
  calc2(&square); // передача адреса

  return 0;
}

void calc(struct Abstract one) { // функция принимает объект
  int res = one.width * one.height;
  printf("Square = %d\n", res);
}

void calc2(struct Abstract *one) { // функция принимает адрес
  int res = one->width * one->height;
  printf("Square = %d\n", res);
}


/*
#8 - Указатели в Си.mp4
26.с 14:00
*/
#include <stdio.h>
#include <string.h>

struct Car {
  char name[50];
  int speed;
  double weight;
};

int main() {
  struct Car renault;
  strcpy(renault.name, "sandero");
  renault.speed = 150;
  renault.weight = 2000;
  printf("renault %s\nspeed %d\nweight %.1f\n", renault.name, renault.speed, renault.weight);

  struct Car daewoo = {"nexia", 200, 2500};
  printf("daewoo %s\nspeed %d\nweight %.1f\n", daewoo.name, daewoo.speed, daewoo.weight);

  return 0;
}


/*
#7 - Структуры данных.mp4
24.с 8:00
*/
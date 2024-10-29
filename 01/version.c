#include <stdio.h>

int main() {
  printf("c standart %ld\n", __STDC_VERSION__); // стандарт языка Си
  printf("gcc standart %s\n", __VERSION__); // версия компилятора
}
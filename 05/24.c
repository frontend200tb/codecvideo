#include <stdio.h>

#define LEN 10
#define boolean int
#define true 1
#define false 0

int main() {
  int arr[LEN];
  arr[0] = 2;
  arr[1] = 4;
  printf("%d %d\n", arr[0], arr[1]);

  int arr5[5] = {10, 20, 30, 40, 50};
  printf("%d %d %d %d %d\n", arr5[0], arr5[1], arr5[2], arr5[3], arr5[4]);

  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 8. Массивы. Собираем подобное к подобному
24.c 3:00

директива #define позволяет опрделить константы, а также
заменить длинные названия на короткие, такие короткие названия будут называться alias

статические массивы содержат элементы одного типа данных и число элементов неизменно
*/

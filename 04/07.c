#include <stdio.h>

static int a = 500; // глобальная локальная переменная
                    // недоступна в других файлах
int main()
{
  printf("a = %d\n", a);
  extern int b; // объявлена в другом файле
  printf("b = %d\n", b);
  extern int c; // недоступна, выдаст предупреждение
  // printf("c = %d\n", c); // не скомпилируется

  return 0;
}

// 07. Локальные и Глобальные переменные в языке Си
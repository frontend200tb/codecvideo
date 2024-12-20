#include <stdio.h>

int main() {
  // \n \t \\ \0
  printf("Hello World\nHello\ttab\nHello \\\nstop line\0 anything");

  int a = 50;
  // %d %s %c %p %f %lf %x
  // %.2f %5d %05d %%
  printf("\n%d\n", a);
  printf("%5d\n", a);
  printf("%05d\n", a);
  printf("contains %5d%%\n", a);

  printf("Value a %d\n", a);
  printf("Adress a %p\n", &a);
  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 2. Базовые понятия. Как всё устроено, и что с этим делать
02.c 11:00
*/

/*
Директивы препроцессора выполняются до запуска программы и даже до компиляции. В директивах препроцессора подключаются заголовочные файлы и определяются абсолютные значения

Программы на языке Си работают на одном уровне с ОС, а не в среде виртуализации, поэтому программы должны сообщать ОС что они отработали нормально. Для этого из программы возвращается результат ее работы - код 0. Поэтому тип возвращаемого значения функции main- integer. Любой другой возвратный код сообщает системе что программа завершена некорректно и необходимо освободить занятые ей ресурсы.

Функция printf() предназначена для форматированного вывода текста в консоль. Сама функция printf() описана в заголовке stdio.h. Для форматирования есть два инструмента - экранированные последовательности и заполнители.
*/
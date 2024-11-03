#include <stdio.h>

int main() {
  int a = 50;

  printf("value a %d\n", a);
  printf("adress a %p\n", &a);

  int *p;
  p = &a;
  printf("value pointer %p\n", p);
  printf("adress pointer %p\n", &p);
  printf("value %d\n", *p);
  printf("adress %p\n", p);

  *p = 70;
  printf("value a %d\n", a);


  return 0;
}


/*
2017 [geekbrains] Основы языка Си
Урок 7. Указатели. Ещё один шаг к настоящему низкому уровню
22.c 2:00

Каждая переменная имеет свой адрес в памяти
Разименовывание - получение доступа к переменной по ее адресу
Адрес переменной можно сохранить в указателе
*/

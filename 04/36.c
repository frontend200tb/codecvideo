#include <stdio.h>

typedef struct
{
  char *name;
  char *pop;
} City;

int main()
{
  City ny, sb, la, sf; // тип данных структура
  City *p; // тип данных указатель на структуру

  // запись через точку, вывод через точку
  ny.name = "New-York";
  ny.pop = "8,2 milions";
  printf("city %s has %s people\n", ny.name, ny.pop);

  // запись через точку, вывод через стрелку
  p = &sb;
  sb.name = "Santa Barbara";
  sb.pop = "1 milion";
  printf("city %s has %s people\n", p->name, p->pop);

  // запись через стрелку, вывод через точку
  p = &la;
  p->name = "Los Angeles";
  p->pop = "5 milions";
  printf("city %s has %s people\n", la.name, la.pop);

  // запись через стрелку, вывод через стрелку
  p = &sf;
  p->name = "San Francisco";
  p->pop = "7 milions";
  printf("city %s has %s people\n", p->name, p->pop);

  return 0;
}

// 36. Структуры в языке Си указатели на структуры
/*
указывает на начало фрагмента памяти структуры
операция . меняется на ->
*/
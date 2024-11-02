#include <stdio.h>

int main()
{
  enum MONTHS {Jan, Feb, Mar};
  enum DAYS {Mon=5, Tue=10, Wen} days;

  printf("%d %d %d\n", Jan, Feb, Mar);
  printf("%d %d %d\n", Mon, Tue, Wen);

  int sum1 = Jan + Feb + Mar;
  int sum2 = Mon + Tue + Wen;

  printf("sum1 = %d\n", sum1);
  printf("sum2 = %d\n", sum2);

  enum DAYS day = Mon + Tue;
  printf("day %d\n", day);

  days = Mon + Wen;
  printf("days %d\n", days);

  typedef int new_type;  // создаем свой тип данных
  new_type a = 100;
  printf("new_type a = %d\n", a);

  typedef char ch[12]; // создаем свой тип данных
  ch b = "programming";
  printf("ch b = %s\n", b);

  return 0;
}

// 12. Объявление перечислений в языке Си

/*
MONTH это структура данных,
Jan, Feb, Mar это свойства,
1, 2, 3 это значения этих свойств

DAYS это структура данных,
Mon, Tue, Wen это свойства,
5, 10, 11 это значения этих свойств
*/
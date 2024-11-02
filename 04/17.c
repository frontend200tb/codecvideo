#include <stdio.h>

int main()
{
  int a = 10;
  if(a == 10) {
    printf("true a = %d\n", a);
  } else {
    printf("false a = %d\n", a);
  }
  a++;
  if(a == 10) {
    printf("true a = %d\n", a);
  } else if(a == 11) {
    printf("true a = %d\n", a);
  } else {
    printf("false a = %d\n", a);
  }
  a++;
  if(a == 10) {
    printf("true a = %d\n", a);
  } else if(a == 11) {
    printf("true a = %d\n", a);
  } else {
    printf("false a = %d\n", a);
  }

  return 0;
}

// 17. Проверка условий if  else if  else
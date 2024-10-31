#include <stdio.h>

int main()
{
  int prices[] = {10, 20, 30, 40};

  // цикл while
  int i = 0;
  while(i<4)
  {
    printf("%d ", prices[i]);
    i++;
  }

  // цикл for
  for(int i = 0; i < 4; i++)
  {
    printf("%d ", prices[i]);
  }

  // цикл do while
  i = 0;
  do
  {
    printf("%d ", prices[i]);
    i++;
  } while(i<4);

  return 0;
}

// #18. Циклы
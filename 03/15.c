#include <stdio.h>

int main()
{
  float price = 12.0f;
  float prices[4] = {10.0f, 20.0f, 30.0f, 40.0f};

  printf("%.2f\n", price);
  printf("%.2f %.2f %.2f %.2f \n", prices[0], prices[1], prices[2], prices[3]);

  return 0;
}

// #15. Массивы. Часть 1
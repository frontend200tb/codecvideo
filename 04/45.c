#include <stdio.h>

int main()
{
  int nums[] = {22, 36, 4, 17, 9, 32};
  int min = nums[0];
  int max = nums[0];
  int len = sizeof(nums)/sizeof(int); // размер массива
  printf("len %d", len);
  for(int i = 1; i < len; i++)
  {
    if(nums[i] < min) {
      min = nums[i];
    }
    if(nums[i] > max) {
      max = nums[i];
    }
  }
  printf("min %d, max %d", min, max);

}

// 45. Нахождение max, min числа в массиве
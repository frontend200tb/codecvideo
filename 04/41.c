#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
  int r, temp, nums[50];
  char buf[4], str[50] = {"Your six numbers: "};
  srand(time(NULL)); // зерно для rand()
  for(int i = 0; i < 50; i++) {
    nums[i] = i;
  }
  for(int i = 1; i < 50; i++) {
    r = (rand() % 49) + 1; // от 1 до 49
    temp = nums[i];
    nums[i] = nums[r];
    nums[r] = temp;
  }
  for(int i = 1; i <= 6; i++) {
    sprintf(buf, "%d", nums[i]);
    strcat(buf, " ");
    strcat(str, buf);
  }
  printf("%s\n", str);

  return 0;
}

// 41. Рандомные числа в СИ
/*
rand() генерерует положительное целое число 0 ... 32767
rand % 9 + 10 вернет число от 10 до 19
rand() % (max - min +1) + min
rand() вернет не случайное число, а одну и ту же последовательность при ее вызовах

srand(int) принимает зерно для функции rand()
Если не использовать функцию srand(), то по умолчанию зерно равно 1.
для каждого зерна генерируется разная последовательность, поэтому в качестве зерна передают функцию time(), что бы числа казались случайными
srand(time(0));
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sort_num(const void*, const void*);
int sort_str(const void*, const void*);

int main()
{
  int nums[] = {4,8,2,6,1,9,0,5,3,7,10};
  qsort(nums, 11, sizeof(int), sort_num);
  for(int i = 0; i < 11; i++) {
    printf("%d ", nums[i]);
  }

  char *strs[] = {"betta", "gamma", "alfa", "delta"};
  qsort(strs, 4, sizeof(char*), sort_str);
  for(int i = 0; i < 4; i++) {
    printf("%s ", strs[i]);
  }

  return 0;
}

int sort_num(const void *a, const void *b) {
  int x = *(int *)a;
  int y = *(int *)b;
  return x - y;
}

int sort_str(const void *a, const void *b) {
  char **x = (char **)a;
  char **y = (char **)b;
  return strcmp(*x, *y);
}

// 42. Сортировка в СИ
/*
qsort() быстрая сортировка массива
*/
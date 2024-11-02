#include <stdio.h>

int main()
{
  char ch[] = "abcde";

  printf("abcde\\a = %s\a\n", ch);
  printf("abcde\\b = %s\b\n", ch);
  printf("abcde\\f = %s\f\n", ch);
  printf("abcde\\n = %s\n\n", ch);
  printf("abcde\\r123 = \n%s\r123\n", ch);
  // printf("abcde \\a = %s\n", ch);


  return 0;
}

// 04. Escape последовательности
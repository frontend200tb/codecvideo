#include <stdio.h>

void string(char[]);

int main() {
  string("notebook digma pro");
  char word2[] = {'s', 'e', 'c', 'o', 'n', 'd', '\0'};
  string(word2);
  char word3[] = "3 notebook";
  string(word3);

  return 0;
}

void string(char arr[]) {
  printf("%s\n", arr);
}


/*
#6 - Функции в Си.mp4
22.с 15:00
*/
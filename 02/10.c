#include <stdio.h>

int main() {
  char word[] = {'b', 'o', 'o', 'k'}; // массив из 4 элементов типа char
  printf("%c%c%c%c\n", word[0], word[1], word[2], word[3]);
  printf("%s\n", word);

  char word2[] = "note book"; // массив из 9 элементов типа char
  printf("%c%c%c%c%c%c%c%c%c\n", word2[0], word2[1], word2[2], word2[3], word2[4], word2[5], word2[6], word2[7], word2[8]);
  printf("%s\n", word2);

  return 0;
}


/*
#3 - Массивы данных.mp4
10.с 9:00
*/
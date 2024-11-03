#include <stdio.h>

void array() {
  const int row = 5, col = 5;
  int r, c;
  int twoDim[5][5];
  /*
  * [][][][][]
  * [][][][][]
  * [][][][][]
  * [][][][][]
  * [][][][][]
  */
  printf("Two dimensional array\n");
  for (r = 0; r < row; r++) {
    for (c = 0; c < col; c++) {
      twoDim[r][c] = (r + 1) * (c + 1);
      printf("%3d ", twoDim[r][c]);
    }
    printf("\n");
  }
}
#include <stdio.h>

int main()
{
  int a = 0;
  fprintf(stdout, "Choose a film\n");
  fprintf(stdout, "1 Terminator\n");
  fprintf(stdout, "2 Taxi\n");
  fprintf(stdout, "3 Rocky\n");
  fscanf(stdin, "%d", &a);
  switch(a) {
    case 1:
      fprintf(stdout, "Shwarznegger");
      break;
    case 2:
      fprintf(stdout, "rally");
      break;
    case 3:
      fprintf(stdout, "Stalone");
      break;
    default:
      fprintf(stdout, "Repeat again");
  }
  return 0;
}

// 18. Оператор множественного выбора switch  case
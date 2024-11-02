#include <stdio.h>
#include <string.h>

void fa();
void fb();

int main()
{
  fa();
  fb();

  return 0;
}

void fa() {
  char a[] = "tiime this time true";
  char b[] = "time";
  if (strstr(a, b)) {
    printf("%s contain %s\n", a, b);
    printf("adress = %p index = %lld\n", strstr(a, b), strstr(a, b) - a);
  } else {
    printf("%s don't contain %s\n", a, b);
  }
}

void fb() {
  char password[] = "pass";
  char ps[20];
  do {
    printf("Input password: ");
    scanf("%s", ps);
  } while (strcmp(password, ps));
  printf("Well done!");
}

// 32. Строки, функции strstr, strcmp в языке Си
/*
strstr(a, b) поиск подстроки b в строке a
strcmp(a, b) возвращает 1 если строка a равна b
*/
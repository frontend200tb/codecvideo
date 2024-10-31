#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void validateFlags(const char * const [], int);

const char * const allowedFlags[] = {
  "--help",
  "--version",
  "-h",
  "-v"
};
const int const lenF = sizeof allowedFlags / sizeof allowedFlags[0];

int main(const int const argc, const char * const argv[]) {

  if (argc > 1) validateFlags(argv, argc);
  printf("All flags are valid!");

  return EXIT_SUCCESS;
}

void validateFlags(const char * const flags[], int len) {
  bool goodFlag = false;

  for (int i = 1; i < len; i++) {
    for (int j = 0; j < lenF; j++) {
      if (strcmp(flags[i], allowedFlags[j]) == 0) {
        goodFlag = true;
        break;
      }
    }
    if (!goodFlag) {
      printf("Invalid argument %s\n", flags[i]);
      exit(EXIT_FAILURE);
    }
    goodFlag = false;
  }

  return;
}

// #19. Валидатор аргументов
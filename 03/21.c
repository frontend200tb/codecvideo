#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define APP_VERSION "0.1.0"

void validateFlags(const char * const [], int);
void printHelp();
void printVersion();
void invokeCommands(const char * const [], const int);

const char * const allowedFlags[] = {
  "--help",
  "-h",
  "--version",
  "-v"
};

void (*commandStore[])() = {
  printHelp,
  printHelp,
  printVersion,
  printVersion,
};

const int const lenF = sizeof allowedFlags / sizeof allowedFlags[0];

int main(const int const argc, const char * const argv[]) {

  if (argc > 1) {
    validateFlags(argv, argc);
    invokeCommands(argv, argc);
  } else {
    printf("Congratilations!\n");
  }

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

void printVersion() {
  printf("%s\n", APP_VERSION);

  return;
}

void printHelp() {
  printf("--version: app version\n--help: app help\n");

  return;
}

void invokeCommands(const char * const commands[], const int count) {
  for (int i = 1; i < count; i++) {
    for (int j = 0; j < lenF; j++) {
      if (strcmp(commands[i], allowedFlags[j]) == 0) {
        commandStore[j]();
      }
    }
  }
  return;
}

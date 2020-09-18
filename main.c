#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(void) {
  char name[LINE_MAX] = "World";
  char input[LINE_MAX];

  printf("Type your name (or just hit enter):\n");
  fgets(input, LINE_MAX, stdin);

  // this removes the new line from the end of the string
  input[strcspn(input, "\n")] = 0;

  if (strcmp(input, "") != 0) {
    strcpy(name, input);
  }

  printf("Hello, %s!\n", name);

  return 0;
}

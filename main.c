#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char string[32];
  int *pointer;
} Data;

int main() {
  Data data;

  printf("Reading 1 string and 1 integer\n");

  printf("Character pointer: %p\n", data.string);
  printf("Integer pointer: %p\n", data.pointer);

  printf("Enter string and integer separated by space (\"yuiop 4\"): ");

  scanf(" %s", data.string);
  scanf(" %d", data.pointer);

  printf("String: %s\n", data.string);
  printf("Integer: %d\n", *data.pointer);

  return 0;
}


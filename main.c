#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char string[4];
  int *pointer;
} Data;

int main() {
  Data data;
  int integer;

  data.pointer = &integer;

  printf("Reading 1 integer and 1 string\n");
  printf("Pointer value before: %p\n",
         data.pointer);

  printf("Enter integer: ");
  scanf(" %d", data.pointer);
  printf("Integer value: %d\n", *data.pointer);

  printf("Enter string: ");
  scanf(" %s", data.string);

  printf("Pointer value after (smashed): %p\n", data.pointer);

  printf("<");
  printf("Some ");
  printf("other ");
  printf("code ");
  printf("here");
  printf(">");
  printf("\n");

  return 0;
}


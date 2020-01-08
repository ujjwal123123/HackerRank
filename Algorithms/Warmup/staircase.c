#include <stdio.h>

int staircase() {
  int length;
  scanf(" %d", &length);

  for (int i = 0; i < length; ++i) {
    for (int j = 0; j < length - 1 - i; ++j) printf(" ");
    for (int j = 0; j < i + 1; ++j) printf("#");
    printf("\n");
  }

  return 0;
}

int main() { staircase(); }
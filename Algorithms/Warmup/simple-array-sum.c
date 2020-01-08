#include <stdio.h>

int main() {
  int length, num, sum = 0;
  scanf(" %d", &length);

  for (int i = 0; i < length; i++) {
    scanf(" %d", &num);
    sum += num;
  }

  printf("%d\n", sum);
}
#include <stdio.h>

int main() {
  int length;
  scanf(" %d", &length);

  int positive = 0, negative = 0, zero = 0;

  int number;
  for (int i = 0; i < length; ++i) {
    scanf(" %d", &number);

    if (number > 0)
      ++positive;
    else if (number < 0)
      ++negative;
    else
      ++zero;
  }

  printf("%.6f\n", positive / (double)length);
  printf("%.6f\n", negative / (double)length);
  printf("%.6f\n", zero / (double)length);
}
#include <stdio.h>

int main() {
  long long int min = 9999999999, max = 0, sum = 0;

  int num;
  for (int i = 0; i < 5; i++) {
    scanf(" %d", &num);

    sum += num;

    if (num > max) max = num;
    if (num < min) min = num;
  }

  printf("%lld %lld\n", sum - max, sum - min);
}
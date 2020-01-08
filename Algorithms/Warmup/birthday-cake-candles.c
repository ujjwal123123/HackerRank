#include <stdio.h>

int main() {
  int age;
  scanf(" %d", &age);

  int candles[age], max = 0, ans = 0;
  for (int i = 0; i < age; i++) {
    scanf(" %d", &candles[i]);

    if (candles[i] > max) max = candles[i];
  }

  for (int i = 0; i < age; i++) {
    if (candles[i] == max) ans++;
  }

  printf("%d\n", ans);
}
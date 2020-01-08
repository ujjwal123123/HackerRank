#include <stdio.h>

int main() {
  int alice[3], bob[3];
  int alice_count = 0, bob_count = 0;

  for (int i = 0; i < 3; i++) scanf(" %d", &alice[i]);
  for (int i = 0; i < 3; i++) scanf(" %d", &bob[i]);

  for (int i = 0; i < 3; i++) {
    if (alice[i] > bob[i]) ++alice_count;
    if (alice[i] < bob[i]) ++bob_count;
  }

  printf("%d %d\n", alice_count, bob_count);
}
#include <stdio.h>

int main() {
  int len;
  scanf(" %d", &len);

  int grades[len];

  for (int i = 0; i < len; i++) {
    scanf(" %d", &grades[i]);

    if (grades[i] > 37 && (grades[i] % 5) > 2) {
      grades[i] += 5 - (grades[i] % 5);
    }
  }

  for (int i = 0; i < len; i++) {
    printf("%d\n", grades[i]);
  }
}
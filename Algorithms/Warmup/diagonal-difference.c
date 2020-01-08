#include <stdio.h>
#include <stdlib.h>

int main() {
  int size, difference = 0;

  scanf(" %d", &size);

  int matrix[size][size];

  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++) scanf(" %d", &matrix[i][j]);

  for (int i = 0; i < size; i++)
    difference += matrix[i][i] - matrix[size - 1 - i][i];

  printf("%d\n", abs(difference));
}
#include <stdio.h>

int main() {
  int house_init, house_end;
  scanf(" %d %d", &house_init, &house_end);

  int tree1, tree2;
  scanf(" %d %d", &tree1, &tree2);

  int no_apple, no_orange;
  scanf(" %d %d", &no_apple, &no_orange);

  int apples_in_range = 0, oranges_in_range = 0;

  int apples[no_apple], oranges[no_orange];
  for (int i = 0; i < no_apple; i++) {
    scanf(" %d", &apples[i]);

    if (apples[i] + tree1 <= house_end && apples[i] + tree1 >= house_init)
      apples_in_range++;
  }
  for (int i = 0; i < no_orange; i++) {
    scanf(" %d", &oranges[i]);

    if (oranges[i] + tree2 <= house_end && oranges[i] + tree2 >= house_init)
      oranges_in_range++;
  }

  printf("%d\n%d\n", apples_in_range, oranges_in_range);
}
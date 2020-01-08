#include <stdio.h>

int main()
{
    int length, index_excluded;
    scanf(" %d %d", &length, &index_excluded);

    int cost[length], total = 0;
    for (int i = 0; i < length; i++) {
        scanf(" %d", &cost[i]);

        total += cost[i];
    }

    total -= cost[index_excluded];

    int anna_paid;
    scanf(" %d", &anna_paid);

    if (anna_paid == total / 2)
        printf("Bon Appetit\n");
    else
        printf("%d\n", anna_paid - total / 2);

    return 0;
}

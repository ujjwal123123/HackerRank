#include <stdio.h>

int main()
{
    int n, k;

    scanf(" %d %d", &n, &k);

    int heights[n];
    for (int i = 0; i < n; i++)
        scanf(" %d", &heights[i]);

    int doses = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] - k - doses > 0)
            doses = heights[i] - k;
    }

    printf("%d\n", doses);
}
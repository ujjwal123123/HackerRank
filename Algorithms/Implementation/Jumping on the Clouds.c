#include <stdio.h>

int main()
{
    int n;
    scanf(" %d", &n);

    int clouds[n];
    for (int i = 0; i < n; i++)
        scanf(" %d", &clouds[i]);

    int jumps = 0;

    for (int i = 0; i + 1 < n; jumps++) {
        if (clouds[i + 2] != 1)
            i += 2;
        else
            i += 1;
    }

    printf("%d\n", jumps);
}
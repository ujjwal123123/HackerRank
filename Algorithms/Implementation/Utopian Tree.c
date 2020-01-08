#include <stdio.h>

int solve(int n)
{
    int height = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            height *= 2;
        else
            height += 1;
    }
    return height;
}

int main()
{
    int times;
    scanf("%d", &times);

    for (int i = 0; i < times; i++) {
        int n;
        scanf(" %d", &n);
        printf("%d\n", solve(n));
    }
}
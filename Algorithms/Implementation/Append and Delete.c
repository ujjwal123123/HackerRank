#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int ops;

    scanf(" %s %s %d", str1, str2, &ops);

    // calculate string length
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0')
        len1++;
    while (str2[len2] != '\0')
        len2++;

    // printf("len1 is %d len2 is %d\n", len1, len2);

    int same = 0;
    while (same < len1 && same < len2) {
        if (str1[same] != str2[same])
            break;
        same++;
    }

    int minMoves = (len1 - same) + (len2 - same);

    // printf("same is %d, minmoves is %d\n", same, minMoves);

    if (ops >= minMoves) {
        if (((ops - minMoves) % 2 == 0) || (ops - len1 - len2 >= 0))
            printf("Yes\n");
        else
            printf("No\n");
    } else
        printf("No\n");
}
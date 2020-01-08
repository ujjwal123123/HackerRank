#include <stdio.h>

int main()
{
    int length, color, color_freq[101] = { 0 }, total_pairs = 0;
    scanf("%d", &length);

    while (length--) {
        scanf("%d", &color);
        total_pairs += color_freq[color];
        color_freq[color] ^= 1;
    }

    printf("%d", total_pairs);
    return 0;
}
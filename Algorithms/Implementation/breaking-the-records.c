#include <stdio.h>
#include <stdlib.h>

int check_min_max(int* scores, int length)
{
    int min = scores[0], max = scores[0], min_change = 0, max_change = 0;
    for (int i = 0; i < length; i++) {
        if (max < scores[i]) {
            max = scores[i];
            max_change++;
        } else if (min > scores[i]) {
            min = scores[i];
            min_change++;
        }
    }

    printf("%d %d\n", max_change, min_change);

    return 0;
}

int main()
{
    int length;
    scanf(" %d", &length);

    int* scores;
    scores = malloc(length * sizeof(int));

    for (int i = 0; i < length; i++) {
        scanf(" %d", &scores[i]);
    }

    check_min_max(scores, length);
}
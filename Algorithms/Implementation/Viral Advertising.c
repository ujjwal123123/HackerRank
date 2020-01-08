#include <stdio.h>

int main()
{
    int days;
    scanf(" %d", &days);

    int people_reached = 5, cummulative_likes = 0;

    while (days--) {
        int likes = people_reached / 2;

        people_reached = likes * 3;
        cummulative_likes += likes;
    }

    printf("%d\n", cummulative_likes);
}
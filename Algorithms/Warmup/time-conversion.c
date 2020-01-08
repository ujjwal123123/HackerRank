#include <stdio.h>

int main()
{
    // printf("%c\n", 0 + '0');

    char time[11];
    scanf("%s", time);

    if (time[8] == 'P') {
        int hours = (int)(time[0] - '0') * 10 + (int)(time[1] - '0') + 12;

        // printf("%d\n", (int)time[0]);

        time[0] = hours / 10 + '0';
        time[1] = hours % 10 + '0';
    }

    time[8] = '\0';

    printf("%s\n", time);
}
#include <stdio.h>

int main()
{
    int length, valleys = 0, altitude = 0;
    scanf(" %d", &length);

    char step;
    for (int i = 0; i < length; ++i) {
        scanf(" %c", &step);

        if (step == 'U') {
            if (++altitude == 0)
                ++valleys;
        } else
            --altitude;
    }

    printf("%d\n", valleys);
}
#include <stdio.h>

int main()
{
    int length;
    scanf(" %d", &length);

    int no[length];
    for (int i = 0; i < length; i++)
        scanf(" %d", &no[i]);

    int max = 0;
    for (int i = 0; i < length; i++) {
        int len = 0;
        for (int j = 0; j < length; j++) {
            int diff = no[(j + i + 1) % length] - no[i];
            if (diff == 1 || diff == 0) {
                len++;
            }
        }

        if (max < len)
            max = len;
    }

    printf("%d\n", max);
}
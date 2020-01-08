#include <stdio.h>

int main()
{
    int length, divisor;

    scanf(" %d %d", &length, &divisor);

    int numbers[length];

    for (int i = 0; i < length; i++)
        scanf(" %d", &numbers[i]);

    int pairs = 0;

    for (int i = 0; i < length; i++)
        for (int j = i + 1; j < length; j++)
            if ((numbers[i] + numbers[j]) % divisor == 0)
                pairs++;

    printf("%d\n", pairs);
}
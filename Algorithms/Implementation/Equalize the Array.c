#include <stdio.h>

int main()
{
    int n;
    scanf(" %d", &n);

    int input[n];
    for (int i = 0; i < n; i++)
        scanf(" %d", &input[i]);

    int freq[101] = { 0 };

    int maxFreq = 0;

    for (int i = 0; i < n; i++) {
        freq[input[i]]++;

        if (freq[input[i]] > maxFreq)
            maxFreq = freq[input[i]];
    }

    printf("%d\n", n - maxFreq);
}
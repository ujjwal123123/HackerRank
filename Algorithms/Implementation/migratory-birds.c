#include <stdio.h>

int main()
{
    int length;
    scanf(" %d", &length);

    int sightings[length], freq[5] = { 0 };
    for (int i = 0; i < length; i++) {
        scanf(" %d", &sightings[i]);
        freq[sightings[i] - 1] += 1;
    }

    int maxfreq = 0, bird_with_maxfreq;
    for (int i = 0; i < 5; i++)
        if (freq[i] > maxfreq) {
            maxfreq = freq[i];
            bird_with_maxfreq = i + 1;
        }

    printf("%d\n", bird_with_maxfreq);
}
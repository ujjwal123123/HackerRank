#include <stdio.h>

int main()
{
    int length1, length2;
    scanf(" %d %d", &length1, &length2);

    int max_arr1 = 0;
    int arr1[length1], arr2[length2];
    for (int i = 0; i < length1; i++) {
        scanf(" %d", &arr1[i]);

        if (arr1[i] > max_arr1) {
            max_arr1 = arr1[i];
        }
    }

    int min_arr2 = 100;
    for (int i = 0; i < length2; i++) {
        scanf(" %d", &arr2[i]);

        if (min_arr2 > arr2[i]) {
            min_arr2 = arr2[i];
        }
    }

    int counter = 0;

    for (int i = max_arr1; i <= min_arr2; i++) {
        int isGoodNumber = 1;
        for (int j = 0; j < length1; j++) {
            if (i % arr1[j] != 0) {
                isGoodNumber = 0;
                break;
            }
        }
        for (int j = 0; j < length2; j++) {
            if (arr2[j] % i != 0) {
                isGoodNumber = 0;
                break;
            }
        }

        if (isGoodNumber == 1) {
            counter++;
        }
    }

    printf("%d\n", counter);
}
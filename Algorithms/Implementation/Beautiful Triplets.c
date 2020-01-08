#include <stdio.h>

int main()
{
    int length, diff;
    scanf(" %d %d", &length, &diff);

    int arr[length];
    for (int i = 0; i < length; i++)
        scanf(" %d", &arr[i]);

    int noOfTriples = 0;

    int i = 0;
    while (i < length) {

        int j = i + 1;
        while (j < length && arr[j] - arr[i] <= diff) {

            if (arr[j] - arr[i] == diff) {

                int k = j + 1;
                while (k < length && arr[k] - arr[j] <= diff) {

                    if (arr[k] - arr[j] == diff)
                        noOfTriples++;

                    k++;
                }
            }

            j++;
        }

        i++;
    }

    // for (int i = 0; i < length; i++)

    //     for (int j = i + 1; j < length && arr[j] - arr[i] <= diff; j++)

    //         if (arr[j] - arr[i] == diff)

    //             for (int k = j + 1; k < length && arr[k] - arr[j] <= diff; k++)

    //                 if (arr[k] - arr[j] == diff)
    //                     noOfTriples++;

    printf("%d\n", noOfTriples);
}

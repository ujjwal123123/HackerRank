#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int budget, num_keyboards, num_usb;
    scanf(" %lld %lld %lld", &budget, &num_keyboards, &num_usb);

    long long int *keyboards, *usb;
    keyboards = malloc(num_keyboards * sizeof(long long int));
    usb = malloc(num_usb * sizeof(long long int));

    for (int i = 0; i < num_keyboards; i++) {
        scanf(" %lld", &keyboards[i]);
    }
    // printf("sucess\n");

    for (int i = 0; i < num_usb; i++) {
        scanf(" %lld", &usb[i]);
    }
    // printf("sucess\n");

    long long int min = keyboards[0] + usb[0], max = 0;
    for (int i = 0; i < num_keyboards; i++)
        for (int j = 0; j < num_usb; j++) {
            if (keyboards[i] + usb[j] < min)
                min = keyboards[i] + usb[j];

            if (keyboards[i] + usb[j] > max && keyboards[i] + usb[j] <= budget)
                max = keyboards[i] + usb[j];
        }

    if (min < budget)
        printf("%lld\n", max);
    else
        printf("-1\n");
}
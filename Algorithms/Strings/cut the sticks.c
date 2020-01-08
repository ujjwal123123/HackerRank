#include <stdio.h>

int main()
{
    int no;
    scanf(" %d", &no);

    int length[no];
    for (int i = 0; i < no; i++)
        scanf(" %d", &length[i]);

    while (1) {
        // count sticks
        int sticks_present = 0;
        for (int i = 0; i < no; i++)
            if (length[i] > 0)
                sticks_present++;

        if (sticks_present == 0)
            return 0;

        printf("%d\n", sticks_present);

        // Find the smallest stick
        int smallest = 10000;
        for (int i = 0; i < no; i++)
            if (length[i] > 0 && length[i] < smallest)
                smallest = length[i];

        // printf("smallest is %d\n", smallest);

        // update length
        for (int i = 0; i < no; i++)
            length[i] -= smallest;
    }
}
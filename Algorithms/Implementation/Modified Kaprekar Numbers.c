#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int length(int n)
{
    // if (n == 0)
    //     return 0;

    int len = 0;
    while (n) {
        len++;
        // printf("len is %d and n is %d\n", len, n);
        n = n / 10;
    }

    // printf("inside length \n");
    return len;
}

int isKaprekar(int n)
{
    assert(length(5) == 1);
    assert(length(100) == 3);

    int l_r = (length(n) + 1) / 2;
    int l_l = length(n) - l_r;

    // printf("exited length\n");

    printf("length of %d is %d\n", n, length(n));

    printf("Left half of %d is %d and right half is %d\n", n, n / (int)pow(10, l_l), n % (int)pow(10, l_r));

    if (n == n % (int)pow(10, l_r) + n / (int)pow(10, l_l))
        printf("%d\n", n);

    return 0;
}

int main()
{
    int low, upp;
    scanf(" %d %d", &low, &upp);

    printf(" hello\n");

    for (int i = low; i <= upp; i++)
        isKaprekar(i);

    printf("hello\n");
}
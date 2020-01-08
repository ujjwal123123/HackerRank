#include <math.h>
#include <stdio.h>

int main()
{
    int x1, v1, x2, v2;
    scanf(" %d %d %d %d", &x1, &v1, &x2, &v2);

    // double res = (x1 - x2) / (double)(v1 - v2);
    // if (res < 0 && (int)res == res) {
    //     printf("YES\n");
    // } else {
    //     printf("NO\n");
    // }

    int res = (x1 - x2) / (v1 - v2);
    if (res < 0 && res == 0)
        printf("YES\n");
    else
        printf("NO\n");
}
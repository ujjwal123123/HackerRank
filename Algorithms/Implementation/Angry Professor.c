#include <stdio.h>

int solve()
{
    int no, threshold;
    scanf(" %d %d", &no, &threshold);
    int time, onTime = 0;

    for (int i = 0; i < no; i++) {
        scanf(" %d", &time);
        if (time <= 0)
            onTime++;
    }

    if (onTime < threshold)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
int main()
{
    int times;
    scanf(" %d", &times);

    while (times--) {
        solve();
    }
}
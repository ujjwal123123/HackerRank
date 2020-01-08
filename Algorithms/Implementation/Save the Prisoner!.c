#include <stdio.h>

int solve()
{
    long long int prisoners, sweets, chair;
    scanf(" %lld %lld %lld", &prisoners, &sweets, &chair);

    long long int ans = (chair + sweets - 1) % prisoners;
    if (ans == 0)
        ans = prisoners;
    printf("%lld\n", ans);

    return 0;
}

int main()
{
    int times;
    scanf(" %d", &times);

    while (times--)
        solve();
}
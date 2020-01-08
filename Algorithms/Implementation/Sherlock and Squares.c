#include <math.h>
#include <stdio.h>

int solve()
{
    long long int start, end;
    scanf(" %lld %lld", &start, &end);

    long long int ans = 0;
    long long int sqrt = ceil(sqrtf((float)start));

    while (sqrt * sqrt <= end) {
        ans++;
        sqrt++;
    }

    printf("%lld\n", ans);
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
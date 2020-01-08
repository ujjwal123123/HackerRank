#include <math.h>
#include <stdio.h>

int max3(long long int n, long long m, long long o)
{
    if (n > m) {
        if (o > n)
            return o;
        else
            return n;

    } else {
        if (m > o)
            return m;
        else
            return o;
    }
}

int solve()
{
    long long int l, m;
    scanf(" %lld %lld", &l, &m);

    long long int no[l];
    for (long long int i = 0; i < l; i++)
        scanf(" %lld", &no[i]);

    long long int best = 0, maxm1 = 0, maxm2 = 0;
    for (long long int i = 0; i < l; i++) {
        maxm2 = (maxm1 + no[i]) % m;
        maxm1 = fmax((maxm1 + no[i]) % m, no[i] % m);
        best = max3(maxm1, maxm2, best);
    }

    printf("%lld\n", best);
    return 0;
}

int main()
{
    long long int times;
    scanf(" %lld", &times);

    for (long long int i = 0; i < times; i++)
        solve();
}
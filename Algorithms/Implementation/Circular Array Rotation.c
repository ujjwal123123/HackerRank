#include <stdio.h>

int main()
{
    long long int len, rot, qn;
    scanf(" %lld %lld %lld", &len, &rot, &qn);
    // rot = rot % len;

    long long int no[len];
    for (int i = 0; i < len; i++)
        scanf(" %lld", &no[i]);

    while (qn--) {
        int query;
        scanf(" %d", &query);

        printf("%lld\n", no[(((query - rot) % len) + len) % len]);
    }
}
#include <stdio.h>

int main()
{
    int length;
    scanf(" %d", &length);

    int nos[length];
    for (int i = 0; i < length; ++i)
        scanf(" %d", &nos[i]);

    int day, month;
    scanf(" %d %d", &day, &month);

    int ans = 0;
    for (int i = 0; i < length - month + 1; ++i) {
        int sum = 0;

        for (int j = i; j < i + month; ++j) {
            sum += nos[j];
        }

        if (sum == day) {
            ++ans;
        }
    }

    printf("%d\n", ans);
}
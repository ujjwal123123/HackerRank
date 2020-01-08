#include <stdio.h>

int main()
{
    int n, p;
    scanf(" %d %d", &n, &p);

    int front = p / 2;
    int back;
    if (n % 2 == 0)
        back = (n - p + 1) / 2;
    else
        back = (n - p) / 2;

    if (front >= back)
        printf("%d\n", back);
    else
        printf("%d\n", front);
}
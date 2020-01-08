#include <math.h>
#include <stdio.h>

int solve()
{
    int catA, catB, mouse;
    scanf(" %d %d %d", &catA, &catB, &mouse);

    if (abs(catA - mouse) < abs(catB - mouse))
        printf("Cat A\n");
    else if (abs(catA - mouse) > abs(catB - mouse))
        printf("Cat B\n");
    else
        printf("Mouse C\n");

    return 0;
}

int main()
{
    int times;
    scanf(" %d", &times);

    while (times--)
        solve();
}
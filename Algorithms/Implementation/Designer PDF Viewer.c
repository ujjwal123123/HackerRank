#include <malloc.h>
#include <stdio.h>

int main()
{
    int heights[26];

    for (int i = 0; i < 26; i++)
        scanf(" %d", &heights[i]);

    char* str;
    str = malloc(8 * sizeof(char));
    scanf(" %s", str);

    int length = 0, max_height = 0;
    while (str[length]) {
        if (heights[str[length] - 'a'] > max_height)
            max_height = heights[str[length] - 'a'];

        length++;
    }

    printf("%d\n", max_height * length);
}
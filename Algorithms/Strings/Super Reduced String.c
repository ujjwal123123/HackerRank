#include <malloc.h>
#include <stdio.h>

int main()
{
    char* s;
    s = malloc(100 * sizeof(char));
    scanf(" %[^\n]s", s);

    {
        int i = 1, count = 1;
        while (s[i++]) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                if (count % 2 == 1)
                    printf("%c", s[i - 1]);
                count = 1;
            }
        }

        printf("\n");
    }
}
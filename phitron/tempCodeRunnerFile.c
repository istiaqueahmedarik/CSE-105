#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    fgetc(stdin);
    while (t--)
    {
        char c[100];
        fgets(c, 100, stdin);
        char rev[100];
        int i;
        int j = 0;
        for (i = strlen(c) - 1; i >= 0; i--)
        {
            if (c[i] < 'a')
            {
                c[i] = c[i] + 32;
            }
            rev[j] = c[i];
            j++;
        }
        rev[strlen(c)] = 0;
        if (strcmp(c, rev) == 0)
        {
            if (strlen(c) > 7)
            {
                printf("Case #2: %c%ld%c", c[0], strlen(c) - 2, c[0]);
            }
            else if (strlen(c) <= 7)
            {
                printf("Case #3: %s", c);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome");
        }

        printf("\n");
    }
}
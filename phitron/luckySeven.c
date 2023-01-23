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
        char c[30];
        fgets(c, 30, stdin);
        c[strlen(c) - 1] = '\0';
        int i;
        char first = c[0];
        char last = c[strlen(c) - 1];
        char copy[30];
        strcpy(copy, c);
        int proof = 0;
        for (i = 0; i < strlen(c); i++)
        {

            if (c[i] != c[strlen(c) - i - 1])
            {
                proof = 1;
                break;
            }
        }
        if (proof)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else
        {
            if (strlen(c) > 7)
            {
                printf("Case #2: %c%ld%c\n", first, strlen(c) - 2, last);
            }
            else if (strlen(c) <= 7)
            {
                printf("Case #3: %s\n", copy);
            }
        }
    }
}
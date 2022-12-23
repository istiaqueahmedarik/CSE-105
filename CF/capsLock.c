#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[105];
    fgets(s, sizeof(s), stdin);
    int upper = 0;
    int first = 0;
    if (s[0] >= 'A' && s[0] <= 'Z')
    {
        first = 1;
    }
    for (int i = 1; i < strlen(s); i++)
    {

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
    }
    if (first == 0 && upper == strlen(s) - 2)
    {
        s[0] -= 32;
        for (int i = 1; i < strlen(s); i++)
        {

            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
    }
    else if (first == 1 && upper == strlen(s) - 2)
    {
        for (int i = 0; i < strlen(s); i++)
        {

            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
    }
    printf("%s", s);
}
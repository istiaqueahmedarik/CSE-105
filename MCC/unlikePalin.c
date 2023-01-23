#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(char s[], int r)
{
    if (r == 1)
    {
        int i = 0;
        int j = strlen(s) - 2;
        while (i <= j)
        {
            if (s[i] != s[j])
            {
                return -1;
            }

            i++;
            j--;
        }
        return 1;
    }
    else
    {
        int i = 0;
        int j = strlen(s) - 3;
        while (i <= j)
        {

            if (s[i] != s[j])
            {
                return -1;
            }

            i++;
            j--;
        }
        return 1;
    }
}
int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    if (check(s, 1) == 1 && check(s, 0) == 1)
    {
        printf("%d\n", 0);
    }
    else if (check(s, 1) == 1 && check(s, 0) == -1)
    {
        printf("%d\n", strlen(s) - 2);
    }
    else
    {
        printf("%d\n", strlen(s) - 1);
    }
}
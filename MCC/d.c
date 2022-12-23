#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lla(char s[])
{
    int n = strlen(s) - 1;
    if (s[n - 1] == '.' && s[n - 2] == 'a' && s[n - 3] == 'l' && s[n - 4] == 'a' && s[n - 5] == 'l')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int miao(char s[])
{
    if (s[0] == 'm' && s[1] == 'i' && s[2] == 'a' && s[3] == 'o' && s[4] == '.')
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    fgetc(stdin);
    while (t--)
    {
        char s[105];

        fgets(s, sizeof(s), stdin);
        if (strlen(s) < 5)
        {
            printf("OMG>.< I don't know!\n");
        }
        else
        {
            if (lla(s) == 1 && miao(s) != 1)
            {
                printf("Freda's\n");
            }
            else if (miao(s) == 1 && lla(s) != 1)
            {
                printf("Rainbow's\n");
            }
            else
            {
                printf("OMG>.< I don't know!\n");
            }
        }
    }
}
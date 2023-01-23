#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[100];
        char t[100];
        scanf("%s", s);
        scanf("%s", t);
        int i;
        for (i = 0; i < strlen(s); i++)
        {

            if (s[i] == '?' || t[i] == '?')
            {
                continue;
            }
            else
            {
                if (s[i] != t[i])
                {
                    printf("No\n");
                    break;
                }
            }
        }
        if (i == strlen(s))
        {
            printf("Yes\n");
        }
    }
}
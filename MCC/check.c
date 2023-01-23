#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    fgetc(stdin);
    while (t--)
    {
        char s[100];
        char s1[100];
        int i;
        fgets(s, sizeof(s), stdin);
        fgets(s1, sizeof(s1), stdin);
        if (strlen(s) != strlen(s1))
        {
            printf("No\n");
        }
        else
        {
            for (i = 0; i < strlen(s); i++)
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                }
                else
                {
                    if (s[i] != s1[i])
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
}

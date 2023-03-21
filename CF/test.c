#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ' && s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i]);
        }
        else
        {
            while (s[i] == ' ' || (s[i] != ' ' && (s[i] < 'a' || s[i] > 'z')))
            {
                if (s[i] != ' ')
                {
                    printf("%c", s[i]);
                }
                i++;
            }
            printf(" ");
            i--;
        }
    }
    return 0;
}
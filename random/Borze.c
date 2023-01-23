#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i <= len; i++)
    {
        if (s[i] == '.')
            printf("0");
        if (s[i] == '-' && s[i + 1] == '.')
        {
            printf("1");
            i++;
        }
        if (s[i] == '-' && s[i + 1] == '-')
        {
            printf("2");
            i++;
        }
    }
    return 0;
}
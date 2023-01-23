#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    strlwr(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            printf(".%c", s[i]);
        }
    }
}
#include <stdio.h>
#include <string.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    char s[1000];
    gets(s);
    int mx = 0;
    int c = 0;
    int j = 0;
    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            if (c == max(mx, c))
            {
                mx = max(mx, c);
                j = i;
            }
            c = 0;
        }
        else
        {
            c++;
        }
    }
    for (int k = j - mx; k <= j; k++)
    {
        printf("%c", s[k]);
    }
}
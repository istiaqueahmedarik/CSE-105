#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    char c[100];
    gets(a);
    gets(b);
    gets(c);
    int character[26] = {0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0,
                         0};

    for (int i = 0; i < strlen(a); i++)
    {
        character[a[i] - 65] += 1;
    }
    for (int i = 0; i < strlen(b); i++)
    {
        character[b[i] - 65] += 1;
    }
    for (int i = 0; i < strlen(c); i++)
    {
        character[c[i] - 65] -= 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (character[i] != 0)
        {
            printf("NO");
            break;
        }
        else if (i == 25)
        {
            printf("YES");
            break;
        }
    }
}
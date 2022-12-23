#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[200];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ')')
        {
            if (i > 1)
            {
                if (s[i - 1] == '{')
                {
                    s[i - 1]
                }
            }
        }
    }
}
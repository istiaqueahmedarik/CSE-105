#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int same = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = i + 1; j < strlen(s); j++)
        {
            if (s[j] == s[i])
            {
                same++;
                break;
            }
        }
    }
    if ((strlen(s) - same) % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s1[1000000];
    char s2[1000000];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    int change = 0;
    int sum = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        sum += s1[i] - s2[i];
        if (s1[i] != s2[i])
        {
            change++;
        }
    }

    if (change == 2 && sum == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
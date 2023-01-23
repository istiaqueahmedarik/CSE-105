#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[1000000];

    fgets(s, sizeof(s), stdin);
    int count = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            count++;
    }
    printf("%d\n", count);
}
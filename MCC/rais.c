#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[10];
    fgets(s, sizeof(s), stdin);
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    printf("%d\n", count);
}
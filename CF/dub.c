#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[205];
    char str2[205];
    fgets(str, sizeof(str), stdin);
    int left = 0;

    while (left <= strlen(str) - 1)
    {
        if (str[left] == 'W' && str[left + 1] == 'U' && str[left + 2] == 'B')
        {
            str[left] = 32;
            str[left + 1] = 32;
            str[left + 2] = 32;
            left += 3;
        }
        else
        {
            left++;
        }
    }
    printf("%s", str);
}
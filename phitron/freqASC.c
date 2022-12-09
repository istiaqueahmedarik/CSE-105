#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ascending(char s[])
{
    int arr[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        arr[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            for (int j = 0; j < arr[i]; j++)
            {
                printf("%c", i + 97);
            }
        }
    }
}
int main()
{
    char s[1000];
    fgets(s, sizeof(s), stdin);
    ascending(s);
}
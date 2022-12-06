#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[26] = {0};
    char s[1005];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        arr[s[i] - 97]++;
    }
    int odds = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 != 0)
            odds++;
    }
    if (odds <= 1)
        printf("First\n");
    else if (odds % 2 != 0)
        printf("First\n");
    else
        printf("Second\n");
}
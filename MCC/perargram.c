#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[1005];
    fgets(s, sizeof(s), stdin);
    int arr[26] = {0};
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
        printf("0\n");
    else if (odds % 2 != 0)
        printf("%d\n", odds - 1);
    else
        printf("%d\n", odds - 1);
}
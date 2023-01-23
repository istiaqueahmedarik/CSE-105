#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    int arr[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        arr[s[i] - 97]++;
    }
    int odds = 0;
    int even = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odds++;
        printf("%d ", arr[i]);
    }
    if (odds == 2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
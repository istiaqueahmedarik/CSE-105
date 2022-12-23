#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    fgetc(stdin);
    char s[n + 1];
    fgets(s, sizeof(s), stdin);
    int arr[26] = {0};
    int ans = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        arr[s[i] - 97]++;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        if (arr[s[i] - 97] == 1)
        {
            ans++;
        }
    }
    printf("%d", ans);
}
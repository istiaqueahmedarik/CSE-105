#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int ans = 0;
    char prev = 'a';
    for (int i = 0; i < strlen(s); i++)
    {
        int x = abs(s[i] - prev);
        int y = abs(26 - x);
        ans += (x > y) ? y : x;

        prev = s[i];
    }
    printf("%d", ans);
}
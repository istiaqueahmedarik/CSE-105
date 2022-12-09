#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[100];
    fgets(s, sizeof(s), stdin);
    int count = strlen(s) - 2;
    int ans = 1;
    int i = 0;
    if (n % count != 0)
    {
        while ((n - i * count) != n % count)
        {
            ans *= (n - i * count);
            i++;
        }
        ans *= n % count;
    }
    else
    {
        while (n - i * count != count)
        {
            ans *= (n - i * count);
            i++;
        }
        ans *= (n - i * count);
    }

    printf("%d", ans);
}
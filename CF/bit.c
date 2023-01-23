#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        char a[10];
        scanf("%s", &a);
        if (a[1] == '+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
        getchar();
    }
    printf("%d", ans);
}
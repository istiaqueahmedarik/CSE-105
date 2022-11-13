#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[100] = {0};
    for (int i = 0; i <= n; i++)
    {
        char c[10];
        fgets(c, 10, stdin);
        for (int j = 0; j < strlen(c); j++)
        {
            arr[c[j]]++;
        }
    }
    int max = 0;
    int ans = 0;
    for (int k = 65; k <= 90; k++)
    {
        printf("%c %d ", k, arr[k]);
    }
    printf("%d\n", ans);
}
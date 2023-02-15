#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[500];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", arr[j]);
        }
        printf("\n");
    }
    return 0;
}

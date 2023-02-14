#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    n -= 2;
    printf("1 0 0 0\n");
    for (int i = 0; i < n; i++)
        printf("1 0   0\n");
    printf("1 0 0 0\n");
}
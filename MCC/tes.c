#include <stdio.h>
void star(int n)
{
    if (n == 0)
        return;
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
    star(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    star(n);
}
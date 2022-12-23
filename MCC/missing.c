#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int x = (a + b) / 2;
    int y = a - x;
    printf("%d %d", x, y);
}
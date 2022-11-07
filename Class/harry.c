#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int total = (a + b) - 1;
    printf("%d %d\n", total - a, total - b);
}
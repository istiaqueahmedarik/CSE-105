#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int m = a, n = b;
    while (b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }
    printf("%d %d", a, m * n / a);
}

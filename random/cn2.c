#include <stdio.h>
#include <math.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    int ans = 1;
    while (n % 2 == 0)
    {
        ans = n / 2;
        n = n / 2;
    }
    printf("%d", ans);

    return 0;
}
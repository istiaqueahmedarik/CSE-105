#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    if (n % 3 == 0 || (n % 2 == 0 && (n + 3) % 3 == 0) || (n % 2 != 0 && (n + 2) % 3 == 0))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
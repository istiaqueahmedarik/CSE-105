#include <stdio.h>
int main()
{
    long long int n, counter = 0;
    scanf("%lld", &n);
    while (n != 0)
    {
        counter += n % 10;
        n /= 10;
    }
    printf("%lld", counter);
    return 0;
}
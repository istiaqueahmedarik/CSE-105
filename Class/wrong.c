#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int sub = (a - b);
    long long int main;
    if (sub % 10 == 9)
    {
        main = (sub / 10) * 10 + 8;
    }
    else
    {
        main = (sub / 10) * 10 + 9;
    }
    printf("%lld", main);
}
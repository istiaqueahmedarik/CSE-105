#include <stdio.h>
int main()
{

    long long int a, new;
    double b;
    scanf("%lld %lf", &a, &b);

    new = 100 * b + 0.5;

    printf("%lld", a * new / 100);

    return 0;
}
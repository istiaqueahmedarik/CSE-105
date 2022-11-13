#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int one = 0;
    long long int four = 0;

    while (n != 0)
    {
        if (n % 10 == 1)
            n /= 10;
        else if (n % 100 == 14)
            n /= 100;
        else if (n % 1000 == 144)
            n /= 1000;
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}
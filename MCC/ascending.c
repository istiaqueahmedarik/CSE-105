#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long int smallest = a;
    long long int largest = b;
    long long int middle = c;
    if (c > b)
    {
        largest = c;
        middle = b;
    }
    if (b < smallest)
    {
        smallest = b;
        if (a > c)
        {
            largest = a;
            middle = c;
        }
        else
        {
            largest = c;
            middle = a;
        }
    }
    if (c < smallest)
    {
        smallest = c;
        if (b > a)
        {
            largest = b;
            middle = a;
        }
        else
        {
            largest = a;
            middle = b;
        }
    }
    printf("%lld %lld %lld", smallest, middle, largest);
    printf("\n");
}
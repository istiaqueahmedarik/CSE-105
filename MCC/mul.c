#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);

    long long int mul = 0;
    for (long long int i = 0; i < n; i++)
    {
        for (long long int j = i; j < n; j++)
        {
            if (i != j)
            {
                mul += arr[i] * arr[j];
            }
        }
    }
    printf("%lld", mul);
}
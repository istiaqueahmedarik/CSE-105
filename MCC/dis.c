#include <stdio.h>
#include <math.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        long long int temp;
        scanf("%lld", &temp);
        {
            temp < 0 ? (arr[i] = (-1) * temp) : (arr[i] = temp);
        }
    }
    long long int max = arr[0];
    for (long long int i = 0; i < n; i++)
    {
        arr[i] > max ? (max = arr[i]) : (max = max);
    }

    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
        sum += arr[i];
    printf("%lld\n", sum);
    double sum1 = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i] * arr[i];
    }
    sum1 = sqrt(sum1);
    printf("%0.15lf\n", sum1);
    printf("%lld\n", max);
}
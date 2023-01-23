#include <stdio.h>
int prime(int x);
int even(int x);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int primeCount = 0;
    int EvenSum = 0;
    int EvenCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (prime(*(arr + i)) == 1)
            primeCount++;
        if (even(*(arr + i)) == 1)
        {
            EvenSum += *(arr + i);
            EvenCount++;
        }
    }
    printf("Prime numbers: %d\n", primeCount);
    printf("Average of all positive integers: %.2f", (float)EvenSum / (float)EvenCount);
    return 0;
}

int prime(int x)
{
    int i;
    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return -1;
        }
    }
    if (i == x / 2 + 1)
    {
        return 1;
    }
}
int even(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}
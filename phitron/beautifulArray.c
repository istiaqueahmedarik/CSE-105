#include <stdio.h>
#include <math.h>
int digitChecker(int x);
int main()
{
    int n;
    scanf("%d", &n);
    int half = ceil(n / 2);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (digitChecker(*(arr + i)) == 1)
        {
            total++;
        }
    }
    if (total >= half)
    {
        printf("Beautiful");
    }
    else
    {
        printf("Ugly");
    }
}

int digitChecker(int x)
{

    while (x != 0)
    {
        if (x % 10 == 7)
        {
            return 1;
        }
        x /= 10;
    }
    return 0;
}
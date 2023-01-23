#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int count = 0;
    int k = 0;
    int arr[100];
    for (int i = 100; i <= 999; i++)
    {
        int n = i;
        int sum = 0;
        while (n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        if (sum == x)
        {
            arr[k] = i;
            k++;
            count++;
        }
    }
    printf("%d\n", count);
    for (int j = 0; j < k; j++)
    {
        printf("%d\n", arr[j]);
    }
}
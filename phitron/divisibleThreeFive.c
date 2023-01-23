#include <stdio.h>
int div5(int num);
int div3(int num);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = -1;
    for (int i = 0; i < n; i++)
    {
        if (div5(arr[i]) == 1 || div3(arr[i]) == 1)
        {
            if (count == -1)
            {
                count = 0;
            }
            count++;
        }
    }
    printf("%d", count);
}

int div3(int num)
{
    if (num % 3 == 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int div5(int num)
{
    if (num % 5 == 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
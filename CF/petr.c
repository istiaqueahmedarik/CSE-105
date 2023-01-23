#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = 0;
    int count = 0;
    while (n > 0)
    {
        n -= arr[j];
        count = j;
        j++;
        j = j % 7;
    }
    printf("%d", count + 1);
    return 0;
}
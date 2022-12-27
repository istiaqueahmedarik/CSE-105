#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int freq[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    for (int i = 0; i < 1000; i++)
    {
        if (freq[i] % 2 != 0)
        {

            printf("%d ", i);
        }
    }
}
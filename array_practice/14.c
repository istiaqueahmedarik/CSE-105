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
    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (freq[i] > 1)
            count++;
    }
    printf("%d", count);
}
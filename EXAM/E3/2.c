#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int freq[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = 1;
    while (j < n)
    {
        if (freq[arr[i] + arr[j]])
        {
            printf("true\n");
            return 0;
        }
        freq[arr[i] + arr[j]] = 1;
        i++;
        j++;
    }
    printf("false\n");
    return 0;
}
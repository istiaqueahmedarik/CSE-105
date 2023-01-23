#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    int freq[5] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
        sum += arr[i];
    }
    int ans = 0;
    if (sum <= 4)
    {
        printf("1\n");
        return 0;
    }
    while (freq[3] > 0)
    {

        ans++;
        freq[3]--;
        if (freq[1] > 0)
            freq[1]--;
    }
    while (freq[2] > 0)
    {
        ans++;
        freq[2]--;
        if (freq[1] > 0)
            freq[1]--;
    }

    if (freq[2] < 0)
    {
        freq[2] = 0;
    }
    if (freq[3] < 0)
    {
        freq[3] = 0;
    }
    int x = {freq[1] % 4 == 0 ? freq[1] / 4 : freq[1] / 4 + 1};
    printf("%d", ans + freq[4] + x + freq[2] / 2 + freq[3]);
}
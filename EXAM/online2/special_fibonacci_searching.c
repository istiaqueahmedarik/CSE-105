#include <stdio.h>
int freq[1005];
void initialize(int n, int i)
{
    freq[n] = 1;
    if (n > 1000)
        return;
    initialize(n + i, n);
}

int main()
{
    initialize(1, 1);
    int n;
    scanf("%d", &n);
    int arr[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (freq[arr[i]])
            c++;
    }
    printf("%d", c);
}
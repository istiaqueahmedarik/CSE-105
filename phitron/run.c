#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp < k)
        {
            count++;
        }
    }
    printf("%d", count);
}
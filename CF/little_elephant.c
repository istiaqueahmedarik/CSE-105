#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int ans = LONG_MAX;
    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        long long int temp;
        scanf("%lld", &temp);
        if (temp != ans)
        {
            if (temp < ans)
            {
                ans = temp;
                index = i;
            }
        }
        else if (temp == ans)
        {
            index = 0;
        }
    }
    {
        index == 0 ? printf("Still Rozdil") : printf("%d", index);
    }
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        long long int res = 0;
        long long int zero = 0;
        for (long long int j = 0; j < temp; j++)
        {
            long long int temp1;
            scanf("%lld", &temp1);
            if (temp1 == 0)
            {
                zero = 1;
            }
            else if (temp1 < 0)
            {
                res += 1;
            }
        }
        if (res % 2 == 0 || zero == 1)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
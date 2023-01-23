#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int ans = 0;
    for (long long int i = 0; i < a; i++)
    {
        long long int total = 0;
        for (long long int j = 0; j < b; j++)
        {
            long long int temp;
            scanf("%lld", &temp);
            if (temp == 1)
            {
                total++;
            }
        }
        if (total >= b / 2.0)
        {
            ans++;
            total = 0;
        }
    }
    if (ans == a)
        printf("YES");
    else
        printf("NO");
}
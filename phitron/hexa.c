#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return (gcd(b % a, a));
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l;
        scanf("%d", &l);
        int arr[l];
        for (int i = 0; i < l; i++)
            scanf("%d", &arr[i]);
        int ans = 0;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < l; j++)
            {

                if (gcd(arr[i], arr[j]) == 1 && i != j)
                {
                    ans++;
                }
            }
        }
        printf("%d\n", ans);
    }
}
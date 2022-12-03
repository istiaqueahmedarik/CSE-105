#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int temp = 0;
        while (1)
        {
            int sum = 4 * temp + 12;
            if (sum == n)
            {
                printf("%d %d %d %d\n", temp, temp + 2, temp + 4, temp + 6);
                break;
            }
            temp++;
        }
    }
}
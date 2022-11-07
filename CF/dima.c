#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        total += temp;
    }
    int current = total % (n + 1);
    int ans = 0;
    for (int i = 1; i <= 5; i++)
    {
        current++;
        current = current % (n + 1);
        // don't want to do anything if position is in 1.
        if (current != 1)
        {
            ans++;
        }
    }

    printf("%d", ans);
}

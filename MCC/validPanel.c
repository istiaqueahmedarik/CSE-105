#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int pres[a];
        int gsc[b];
        int ca[c];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &pres[i]);
        }
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &gsc[i]);
        }
        for (int i = 0; i < c; i++)
        {
            scanf("%d", &ca[i]);
        }
        int ans = 0;
        for (int i = 0; i < b; i++)
        {
            int temp1 = 0;
            int temp2 = 0;
            for (int j = 0; j < c; j++)
            {
                if (ca[j] >= gsc[i])
                {
                    temp1++;
                }
            }
            for (int j = 0; j < a; j++)
            {
                if (pres[j] <= gsc[i])
                {
                    temp2++;
                }
            }

            ans += temp1 * temp2;
        }
        printf("%d\n", ans);
    }
}
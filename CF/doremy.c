#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int sameL = -1;
        int sameR = -1;
        int left = 0;
        int right = 1;
        int active = 0;
        for (int i = 0; right <= n; i++)
        {
            if (arr[left] == arr[right])
            {
                if (active == 0 && sameL == -1)
                {
                    sameL = left + 1;
                    active = 1;
                }
                sameR = right + 1;
            }
            else
            {
                active = 0;
            }
            left++;
            right++;
        }
        if (sameL == -1)
        {
            printf("%d %d\n", 1, n);
        }
        else
        {
            printf("%d %d\n", sameL, sameR);
        }
    }
}
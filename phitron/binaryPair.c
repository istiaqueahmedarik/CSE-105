#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int length;
        scanf("%d", &length);
        getchar();
        char c[length + 5];
        fgets(c, length + 5, stdin);
        int left = 0;
        int right = 1;
        int ans = 0;
        while (left != length - 1)
        {
            if ((c[left] == '1' && c[right] == '0') || (c[left] == '0' && c[right] == '1'))
            {
                ans++;
            }

            left++;
            right++;
        }
        printf("%d\n", ans);
    }
}
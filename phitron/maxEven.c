#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int even1 = 0, even2 = 0;
    int odd1 = 0, odd2 = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp % 2 == 0)
        {
            if (even1 < temp)
            {
                int temps = even1;
                even1 = temp;
                even2 = temps;
            }
            else if (temp > even2)
            {
                even2 = temp;
            }
        }
        else
        {
            if (odd1 < temp)
            {
                int temps = odd1;
                odd1 = temp;
                odd2 = temps;
            }
            else if (temp > odd2)
            {
                odd2 = temp;
            }
        }
    }
    if (even1 + even2 > odd1 + odd2 || (odd1 == 0 || odd2 == 0))
    {
        printf("%d\n", even1 + even2);
    }
    else
    {
        printf("%d\n", odd1 + odd2);
    }

    return 0;
}
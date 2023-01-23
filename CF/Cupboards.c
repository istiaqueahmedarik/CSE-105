#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int countA1 = 0;
    int countA0 = 0;
    int countB1 = 0;
    int countB0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 0)
        {
            countA0++;
        }
        else if (a == 1)
        {
            countA1++;
        }
        if (b == 0)
        {
            countB0++;
        }
        else if (b == 1)
        {
            countB1++;
        }
    }
    if (countA0 <= countA1)
    {
        count1 = countA0;
    }
    else
    {
        count1 = countA1;
    }
    if (countB0 <= countB1)
    {
        count2 = countB0;
    }
    else
    {
        count2 = countB1;
    }
    printf("%d", count1 + count2);
    return 0;
}
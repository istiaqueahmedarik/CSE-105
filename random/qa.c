#include <stdio.h>
int main()
{
    int a, b, max, min;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    int answer = 0;
    if (max >= 4)
    {
        answer += 4;
        max = max - 4;
        if (min >= 4)
        {
            min = min - 4;
        }
    }
    else if (max >= 2)
    {
        answer += 2;
        max = max - 2;
        if (min >= 2)
        {
            min = min - 2;
        }
    }
    printf("%d", answer);
    return 0;
}
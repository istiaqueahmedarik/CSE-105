#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hard = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp == 1)
        {
            hard = 1;
        }
    }
    if (hard == 1)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    return 0;
}
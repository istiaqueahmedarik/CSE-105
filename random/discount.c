#include <stdio.h>
#include <math.h>
int main()
{
    int price, discount;
    scanf("%d %d", &price, &discount);
    float ans = price * 10 - (1 / 100.0) * 10 * price * discount;
    if ((int)ans % 100 == 0)
    {
        printf("%d", (int)ans);
    }
    else
    {
        printf("%.1f", ans);
    }
    return 0;
}
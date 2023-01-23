#include <stdio.h>
int main()
{
    float money, money_has;
    scanf("%f %f", &money, &money_has);
    if ((int)money % 5 == 0)
    {
        if (money_has > money && (money_has - money - 0.50) >= 0)
        {
            printf("%0.2f", money_has - money - 0.50);
        }
        else
        {
            printf("%0.2f", money_has);
        }
    }
    else
    {
        printf("%0.2f", money_has);
    }
}
#include <stdio.h>
int main()
{
    int unit;
    double bill = 0.0;
    scanf("%d", &unit);
    for (int i = 1; i <= unit; i++)
    {
        if (i <= 50)
        {
            bill += 50;
        }
        else if (i > 50 && i <= 150)
        {
            bill += 75;
        }
        else if (i > 150 && i <= 250)
        {
            bill += 120;
        }
        else
        {
            bill += 150;
        }
    }
    printf("%.2lf", (bill / 100.0) + (bill / 100.0) * 0.2);
    return 0;
}
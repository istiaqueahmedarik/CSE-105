#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int money = 0;
    while (n != 0)
    {
        if (n >= 1000)
        {
            n -= 1000;
            money++;
        }
        else if (n >= 500)
        {
            n -= 500;
            money++;
        }
        else if (n >= 100)
        {
            n -= 100;
            money++;
        }
        else if (n >= 50)
        {
            n -= 50;
            money++;
        }
        else if (n >= 20)
        {
            n -= 20;
            money++;
        }
        else if (n >= 10)
        {
            n -= 10;
            money++;
        }
        else if (n >= 5)
        {
            n -= 5;
            money++;
        }
        else if (n >= 2)
        {
            n -= 2;
            money++;
        }
        else if (n >= 1)
        {
            n -= 1;
            money++;
        }
    }
    printf("%d", money);
    return 0;
}
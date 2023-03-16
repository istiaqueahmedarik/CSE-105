#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int number = n;
    int digits = 1;
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    n = number;
    while (n != 0)
    {
        int temp = number;
        for (int i = 1; i <= count - digits; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= digits; i++)
        {
            printf("%d", temp % 10);
            temp /= 10;
        }
        digits++;
        printf("\n");
        n /= 10;
    }
}
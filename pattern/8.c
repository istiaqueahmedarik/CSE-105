#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int number = n;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    int x = 1;
    int d = 10;
    for (int i = 1; i <= count; i++)
    {

        for (int j = 1; j <= count - x; j++)
        {
            printf(" ");
        }
        int temp = number % d;
        while (temp != 0)
        {
            printf("%d", temp % 10);
            temp /= 10;
        }
        d *= 10;
        x++;

        printf("\n");
    }
}
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
        printf("%d", number % d);
        d *= 10;
        x++;

        printf("\n");
    }
}
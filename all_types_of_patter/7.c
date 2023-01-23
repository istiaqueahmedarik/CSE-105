#include <stdio.h>
int main()
{
    int row;
    scanf("%d", &row);
    for (int i = row; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
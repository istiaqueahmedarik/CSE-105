#include <stdio.h>
int main()
{
    int row;
    scanf("%d", &row);
    int x = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", x);
            x += 1;
        }

        printf("\n");
    }
}
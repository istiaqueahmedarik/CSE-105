#include <stdio.h>
int main()
{
    int row;
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", (row - j + i) % 2);
        }
        printf("\n");
    }
}
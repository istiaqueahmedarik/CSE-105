#include <stdio.h>
int main()
{
    int row;
    scanf("%d", &row);
    for (int i = row; i > 0; i--)
    {
        for (int j = row - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }

        printf("\n");
    }
}
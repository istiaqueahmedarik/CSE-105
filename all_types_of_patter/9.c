#include <stdio.h>
int main()
{
    int row;
    scanf("%d", &row);
    for (int i = 1; i <= row; i += 2)
    {
        for (int j = i; j <= row; j += 2)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
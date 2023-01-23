#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int row;
    int col;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int temp;
            scanf("%d", &temp);
            if (temp == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    printf("%d\n", abs(3 - row) + abs(3 - col));
}
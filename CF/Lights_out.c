#include <stdio.h>
int main()
{
    int arr[3][3];
    int main[3][3] = {{1, 1, 1},
                      {1, 1, 1},
                      {1, 1, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            for (int k = 1; k <= arr[i][j]; k++)
            {
                main[i][j] = (main[i][j] == 1) ? 0 : 1;

                if (i == 0)
                {
                    main[i + 1][j] = main[i + 1][j] == 1 ? 0 : 1;
                }
                if (i == 1)
                {
                    main[i + 1][j] = main[i + 1][j] == 1 ? 0 : 1;
                    main[i - 1][j] = main[i - 1][j] == 1 ? 0 : 1;
                }
                if (i == 2)
                {
                    main[i - 1][j] = main[i - 1][j] == 1 ? 0 : 1;
                }
                if (j == 0)
                {
                    main[i][j + 1] = main[i][j + 1] == 1 ? 0 : 1;
                }
                if (j == 1)
                {
                    main[i][j + 1] = main[i][j + 1] == 1 ? 0 : 1;
                    main[i][j - 1] = main[i][j - 1] == 1 ? 0 : 1;
                }
                if (j == 2)
                {
                    main[i][j - 1] = main[i][j - 1] == 1 ? 0 : 1;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", main[i][j]);
        }
        printf("\n");
    }
}

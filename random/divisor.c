#include <stdio.h>

/**
 * The function takes an integer as input and prints all the divisors of the input integer
 *
 * @return The program is returning the divisors of the number entered.
 */
int main()
{
    int j, T;
    scanf("%d", &T);
    /* Taking the input from the user and printing the divisors of the number entered. */
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &j);
        printf("Case %d: ", i);

        /* Printing the divisors of the number entered. */
        for (int k = 1; k <= j; k++)
        {
            if (j % k == 0)
            {
                printf("%d ", k);
            }
        }
        printf("\n");
    }
    return 0;
}
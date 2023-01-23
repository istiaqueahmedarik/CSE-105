#include <stdio.h>

/**
 * The function takes an integer as input and prints a square of stars with the size of the square
 * equal to the input integer
 *
 * @return The program is printing a square of asterisks.
 */
int main()
{
    int T;
    scanf("%d", &T);
    /* Printing a square of asterisks. */
    /*
    1. The outer for loop is used to iterate through the number of test cases.
    2. The inner for loop is used to iterate through the number of rows in the square.
    3. The innermost for loop is used to iterate through the number of columns in the square.
    4. The printf function is used to print the asterisks.
    */
    for (int i = 0; i < T; i++)
    {
        int j;
        scanf("%d", &j);
        /* Printing a square of asterisks. */
        for (int k = 0; k < j; k++)
        {
            /* Printing a row of asterisks. */
            for (int l = 0; l < j; l++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
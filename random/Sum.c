#include <stdio.h>

/**
 * The function takes in a number and returns the sum of the last digit and the first digit
 *
 * @return The sum of the last digit and the first digit of the number.
 */
int main()
{
    int result;
    int number;
    int T;
    scanf("%d", &T);
    /* A for loop that will run T times. */
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &number);
        result = number % 10 + number / 10000;
        printf("Sum = %d\n", result);
    }
    printf("\n");
    return 0;
}
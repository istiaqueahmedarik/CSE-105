/* Importing the standard input/output library. */
#include <stdio.h>

/**
 * The function prints out the numbers from 1000 to 1, with a new line every time the number is
 * divisible by 5
 */
int main()
{

    for (long long int i = 1000; i > 0; i--)
    {
        if (i % 5 == 0)
        {
            printf("%lld\n", i);
        }
        else
        {
            printf("%lld\t", i);
        }
    }
    return 0;
}
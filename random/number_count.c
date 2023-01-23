#include <stdio.h>
/* A header file that contains functions for memory allocation, process control, conversions and
others. */
#include <stdlib.h>
#include <string.h>
/*
1. The first line of the code is to take the number of test cases.
2. The next line is to take the numbers from the user.
3. The next line is to convert the numbers to a long integer.
4. The next line is to add 1 to the result.
5. The last line is to print the result.
*/
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        long int res = 0;

        char numbers[1000];
        char *pC = numbers;
        long int number;
        scanf(" %[^\n]", numbers);
        /*
        The code above checks if the pointer pC is not pointing to the last element of the array numbers.
        */
        //    in each step value of pC is increasing by one. So if we convert whole string to pointer and add length of itself, it represent the last element
        while (pC != numbers + strlen(numbers))
        {
            // printf("%p %p \n", pC, numbers);

            /*
            The code above takes a string and converts it to a long integer.
            first parametr: C-string begining with the representation of an integral number
            second parametr: Reference to an object of type char*, whose value is set by the function to the next character in str after the numerical value.
            third parametr: base of the number value
            */
            number = strtol(pC, &pC, 10);
            res = res + 1;
        }
        printf("%ld\n", res);
    }
    return 0;
}

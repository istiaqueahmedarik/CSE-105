#include <stdio.h>
#include <math.h>
int main()
{
    int num, palindromeNumber = 0;
    int rem;
    scanf("%d", &num);
    int real = num;
    int counter = 0;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        palindromeNumber = palindromeNumber * 10 + rem;
        counter++;
    }
    for (int i = pow(10, (counter - 1)); i <= 100; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
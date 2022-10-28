#include <stdio.h>
#include <math.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && ((int)((i == 0) ? 1 : log10(i) + 1)) % 2 == 0)
        {
            long long int palindromeNumber = 0;
            int rem;
            int real = i;
            while (i != 0)
            {
                rem = i % 10;
                i /= 10;
                palindromeNumber = palindromeNumber * 10 + rem;
            }
            if (palindromeNumber == real)
            {
                printf("%lld", palindromeNumber);
                break;
            }
        }
    }
    return 0;
}
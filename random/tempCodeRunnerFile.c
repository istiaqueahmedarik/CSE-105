for (int i = pow(10, (int)ceil(log10(n)) - 1); i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            int palindromeNumber = 0;
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
                printf("%ld", palindromeNumber);
                break;
            }
        }
    }
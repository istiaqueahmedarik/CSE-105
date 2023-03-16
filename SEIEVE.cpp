#include <stdio.h>
bool sieve[1000000000];

int main()
{
    FILE *op;
    op = fopen("sieve.txt", "w");
    printf("%d", sieve[5]);
    sieve[0] = 1;
    sieve[1] = 1;
    for (int i = 2; i < 1000; i++)
    {
        if (sieve[i] == 0)
        {
            for (int j = i * i; j < 1000; j += i)
            {
                sieve[j] = 1;
            }
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        if (sieve[i] == 0)
        {
            printf("%d ", i);
            fprintf(op, "%d ", i);
        }
    }
    fclose(op);
    return 0;
}
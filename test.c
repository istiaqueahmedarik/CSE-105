#include <stdio.h>
int prime(int n, int a1)
{
    if (a1 == n)
        return 1;
    return n % a1 && prime(n, a1 + 1);
}
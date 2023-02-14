#include <stdio.h>

void even_odd_counter(int n, int *even, int *odd)
{
    if (n == 0)
        return;
    if ((n % 10) % 2 == 0)
        *even = *even + 1;
    else
        *odd = *odd + 1;
    even_odd_counter(n / 10, even, odd);
}

int main()
{
    int n;
    scanf("%d", &n);
    int even = 0, odd = 0;
    even_odd_counter(n, &even, &odd);
    if (odd > even)
        printf("Odd");
    else if (even > odd)
        printf("Even");
    else
        printf("Equal");
    return 0;
}
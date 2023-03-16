#include <stdio.h>
int countZeros(int n)
{
    if (n == 0)
        return 0;
    else if (n % 10 == 0)
        return 1 + countZeros(n / 10);
    else
        return countZeros(n / 10);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", countZeros(n));
}
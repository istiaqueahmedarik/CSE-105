#include <stdio.h>
int main()
{
    int n, counter = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        counter += 1;
        n /= 10;
    }
    printf("%d", counter);
    return 0;
}
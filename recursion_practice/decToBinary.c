#include <stdio.h>
void bin(int n)
{
    if (n / 2 == 0)
    {
        printf("1");
        return;
    }
    bin(n / 2);
    printf("%d", n % 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    bin(n);
}
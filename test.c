#include <stdio.h>
void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);
    printf("%d ", n);
}
void pattern(int n)
{
    if (n == 0)
        return;
    else
    {
        pattern(n - 1);
        print(n);
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int num1, num2;
        scanf("%lld %lld", &num1, &num2);
        long long int r1 = num1;
        long long int r2 = num2;
        while (num1 != 0)
        {
            long long int temp = num1;
            num1 = num2 % num1;
            num2 = temp;
        }
        printf("%lld %lld\n", num2, (r1 * r2) / num2);
    }
    return 0;
}
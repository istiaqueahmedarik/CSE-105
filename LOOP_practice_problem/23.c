#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int r1 = num1;
    int r2 = num2;
    while (num1 != 0)
    {
        int temp = num1;
        num1 = num2 % num1;
        num2 = temp;
    }
    printf("GCD: %d, LCM: %d", num2, (r1 * r2) / num2);
    return 0;
}
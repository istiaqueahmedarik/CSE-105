#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your first number: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf((a % b == 0) ? "The first number is divisible by the first number." : "None of them are divisible by the other.");
    }
    else if (b > a)
    {
        printf((b % a == 0) ? "The second number is divisible by the first number." : "None of them are divisible by the other.");
    }
    else if (a == 0 && b == 0)
    {
        printf("Both numbers are zero.");
    }
    else
    {
        printf("Both numbers are divisible by each other.");
    }
    return 0;
}
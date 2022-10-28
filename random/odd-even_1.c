#include <stdio.h>

int main()
{
    /* Declaring a variable called `num` of type `long`. */
    long num;
    scanf("%lld", &num);
    if (num % 2 == 0)
    {
        printf("EVEN!\n");
    }
    else
    {
        printf("ODD!\n");
    }
    return 0;
}
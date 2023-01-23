#include <stdio.h>
#include <math.h>
int main()
{
    double L;
    scanf("%lf", &L);
    L = L / 3.0;
    double res = pow(L, 3);
    printf("%0.16lf", res);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int h1;
    float h2;
    float result;
    scanf("%d", &h1);
    scanf("%f", &h2);
    result = sqrt(pow((h1 + h2), 2) - pow(h2, 2));
    printf("%1.f", result);
    return 0;
}
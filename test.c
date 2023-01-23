#include <stdio.h>
int main()
{
    float x[4] = {5, 10, 15, 20};
    float *p, *q, *r;
    p = &x[2];
    r = p - 1;
    *r = *r + 10;
    q = r + 1;
    *q = *q + 10;
    p = p - 1;
    *p = p[1] - 20 + p[-1];
    printf("%f\n", x[0]);

    printf("%f\n", x[1]);

    printf("%f\n", x[2]);

    printf("%f\n", x[3]);
}
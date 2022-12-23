#include <stdlib.h>
int comp(const void *a, const void *b)
{
    const int *p1 = a;
    const int *p2 = b;
    return *p1 - *p2;
}
qsort(arr, b, sizeof(int), comp);
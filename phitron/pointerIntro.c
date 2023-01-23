#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int *ptrX = &x, *ptrY = &y;
    printf("%d %d", *ptrX, *ptrY);
}
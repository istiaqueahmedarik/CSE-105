#include <stdio.h>
void changeVal(int *n)
{
    *n += 5;
}
int main()
{
    int n;
    scanf("%d", &n);
    changeVal(&n);
    printf("%d", n);
}
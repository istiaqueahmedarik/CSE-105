#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t, s, a;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &s);
        a = s / 5 + s / 25;
        printf("%d\n", a);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    char c, c1;
    scanf("%c", &c);
    scanf("%c", &c1);
    // lower to upper using bitwise
    c = c & ~32;
    c1 = c1 | 32;
    printf("%c", c);
    printf("%c", c1);

    return 0;
}

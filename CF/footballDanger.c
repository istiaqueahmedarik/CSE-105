#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[105];
    fgets(s, sizeof(s), stdin);
    {
        strstr(s, "1111111") || strstr(s, "0000000") ? printf("YES") : printf("NO");
    }
}
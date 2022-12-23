#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[105];
    char s1[105];

    fgets(s, sizeof(s), stdin);
    fgets(s1, sizeof(s1), stdin);
    strlwr(s);
    strlwr(s1);
    printf("%d\n", strcmp(s, s1));
}
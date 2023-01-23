#include <stdio.h>
#include <string.h>
int main()
{
    char string[1000];
    gets(string);
    if (string[0] >= 97)
    {
        string[0] -= 32;
    }
    printf("%s", string);
}
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    bool condition = true;
    char s[100];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        if (condition == true)
        {
            printf("%c", s[i]);
            condition = false;
        }
        else
        {
            printf("%c%c", s[i], s[i]);
            condition = true;
        }
    }
}
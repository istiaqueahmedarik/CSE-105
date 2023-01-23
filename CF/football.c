#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    fgetc(stdin);
    char main[n];
    int first = 1;
    int sec = 0;
    char f[15];
    char s[15];
    fgets(f, 15, stdin);
    f[strlen(f) - 1] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        char c[15];
        fgets(c, 15, stdin);
        c[strlen(c) - 1] = 0;
        if (strcmp(f, c) == 0)
        {
            first++;
        }
        else
        {
            strcpy(s, c);
            sec++;
        }
    }
    if (first > sec)
    {
        printf("%s\n", f);
    }
    else if (first == 1 && sec == 0)
    {
        printf("%s\n", f);
    }
    else
    {
        printf("%s\n", s);
    }
}
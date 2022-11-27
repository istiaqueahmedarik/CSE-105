#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    fgetc(stdin);
    while (t--)
    {
        char c[1000];
        char c2[1000];
        fgets(c, 1000, stdin);
        int j = 0;
        for (int i = strlen(c); i >= 0; i--)
        {
            c2[j] = c[i];
            j++;
        }
        strcat(c, c2);
        printf("%s", c2);
        printf("\n");
    }
}
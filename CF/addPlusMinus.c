#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        fgetc(stdin);
        char s[n + 1];
        fgets(s, sizeof(s), stdin);
        int c = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == '1')
            {
                c++;
            }
            if (c == 2)
            {
                printf("-");
                c = 0;
            }
            else if (i != 0)
            {
                printf("+");
            }
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        fgetc(stdin);

        int max = 0;
        char c[n + 1];
        fgets(c, n + 1, stdin);
        c[strlen(c)] = 0;
        for (int i = 0; i < n; i++)
        {
            int x = c[i];
            if (x > max)
            {
                max = x;
            }
        }
        printf("%d\n", max - 96);
    }
}
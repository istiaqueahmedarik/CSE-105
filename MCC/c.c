#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        fgetc(stdin);
        char s[n + 5];
        fgets(s, sizeof(s), stdin);
        char prev = 'T';
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'H')
            {
                if (prev == 'H')
                {
                    flag = 1;
                    break;
                }
                prev = 'H';
            }
            else if (s[i] == 'T')
            {
                if (prev == 'T')
                {
                    flag = 1;
                    break;
                }
                prev = 'T';
            }
        }
        if (prev == 'H')
        {
            flag = 1;
        }
        printf(flag ? "Invalid\n" : "Valid\n");
    }
}

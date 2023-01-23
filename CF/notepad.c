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
        char s[n];
        fgets(s, sizeof(s), stdin);
        int freq[30] = {0};
        int count = 1;
        int x = s[0];
        for (int i = 1; i < strlen(s); i++)
        {
            printf("%c %c\n", x, s[i]);
            if (s[i] == x)
            {
            }
            else
            {
                x = s[i];
                count++;
            }
        }
        printf("%d", count + 1);
    }
}
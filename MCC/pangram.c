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
        char s[200];
        fgets(s, sizeof(s), stdin);
        int arr[26] = {0};

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                arr[s[i] - 97] += 1;
            }
        }
        int p = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
            {
                p++;
            }
        }
        if (p == 0)
        {
            printf("pangram\n");
        }
        else
        {
            printf("missing ");
            for (int i = 0; i < 26; i++)
            {
                if (arr[i] == 0)
                {
                    printf("%c", i + 97);
                }
            }
        }
        printf("\n");
    }
}
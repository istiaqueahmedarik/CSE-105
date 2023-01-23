#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    char s[a];
    scanf("%s", s);
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a - 1; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                s[j] = 'G';
                s[j + 1] = 'B';
                j++;
            }
        }
    }
    printf("%s", s);
}
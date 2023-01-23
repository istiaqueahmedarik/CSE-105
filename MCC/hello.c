#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    char arr[5] = {'h', 'e', 'l', 'l', 'o'};
    int index_s = 0;
    int res = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = index_s; j < strlen(s); j++)
        {
            if (arr[i] == s[j])
            {
                res++;
                index_s++;
                break;
            }
            else
            {
                index_s++;
            }
        }
    }
    if (res == 5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
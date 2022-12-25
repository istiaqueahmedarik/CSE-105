#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            count++;
        }
    }
    if (len % 2 == 1 && count == 0)
    {
        printf("YES\n");
        return 0;
    }
    if (count != 1)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}

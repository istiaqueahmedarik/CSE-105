#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    int palindrome = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");

    return 0;
}

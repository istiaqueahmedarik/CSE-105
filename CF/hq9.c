#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    gets(a);
    for (int i = 0; i < strlen(a); i++)
    {
        // printf("%d\n", a[i]);
        if (a[i] == 72 || a[i] == 81 || a[i] == 57)
        {
            printf("YES");
            break;
        }
        else if (i == strlen(a) - 1)
        {
            printf("NO");
        }
    }
}
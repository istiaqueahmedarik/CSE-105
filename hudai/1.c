#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);
    int n = strlen(s);
    int m = strlen(t);
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if (j == m)
    {
        printf("%d", n - m);
    }
    else
    {
        printf("-1");
    }
}
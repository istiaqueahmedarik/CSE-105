#include <stdio.h>
#include <string.h>
int check(char s[], int left, int right)
{
    if (left >= right)
        return 1;
    if (s[left] == s[right])
    {
        return check(s, left + 1, right - 1);
    }
    return -1;
}
int main()
{
    char s[100];
    gets(s);
    printf("%d", check(s, 0, strlen(s) - 1));
}
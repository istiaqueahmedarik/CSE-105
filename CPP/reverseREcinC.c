#include <stdio.h>
#include <string.h>
void rev(char s[], int l, int r)
{
    if (l >= r)
        return;
    char temp = s[l];
    s[l] = s[r];
    s[r] = temp;
    rev(s, l + 1, r - 1);
}
int main()
{
    char s[100];
    gets(s);
    rev(s, 0, strlen(s) - 1);
    printf("%s", s);
}
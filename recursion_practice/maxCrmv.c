#include <stdio.h>
#include <string.h>
int min(int a, int b)
{
    return a < b ? a : b;
}
int minCharRmv(char s[], int left, int right)
{
    if (left > right)
        return 0;
    if (s[left] == s[right])
        return minCharRmv(s, left + 1, right - 1);
    return 1 + min(minCharRmv(s, left + 1, right), minCharRmv(s, left, right - 1));
}
int main()
{
    char s[1000];
    gets(s);
    printf("%d", minCharRmv(s, 0, strlen(s) - 1));
}
#include <stdio.h>
int countLeadingZeros(char s[], int i)
{
    if (s[i] == '1')
        return 0;
    return 1 + countLeadingZeros(s, i + 1);
}
int main()
{
    char s[100];
    scanf("%s", s);
    printf("%d", countLeadingZeros(s, 0));
}

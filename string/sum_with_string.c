#include <stdio.h>
#include <string.h>

void summ(char s1[], char s2[], char sum[])
{
    int mL = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);
    int i, j, k, carry = 0;
    for (i = strlen(s1) - 1, j = strlen(s2) - 1, k = 0; k < mL; i--, j--, k++)
    {
        int a = i >= 0 ? s1[i] - '0' : 0;
        int b = j >= 0 ? s2[j] - '0' : 0;
        sum[k] = (a + b + carry) % 10 + '0';
        carry = (a + b + carry) / 10;
    }
    if (carry)
        sum[k++] = carry + '0';
    sum[k] = '\0';
    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char t = sum[i];
        sum[i] = sum[j];
        sum[j] = t;
    }
}
int main()
{
    char s1[1000], s2[1000], sum[10005];
    gets(s1);
    gets(s2);
    summ(s1, s2, sum);
    puts(sum);
}
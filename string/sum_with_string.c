#include <stdio.h>
#include <string.h>

void summ(char s1[], char s2[], char sum[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int maxL = {len1 > len2 ? len1 : len2};
    sum[maxL] = '\0';
    int carry = 0;
    int num1, num2;
    for (int i = maxL - 1; i >= 0; i--)
    {
        int s = 0;
        if (len1 != 0)
            num1 = s1[len1 - 1] - 48;
        if (len2 != 0)
            num2 = s2[len2 - 1] - 48;
        int temp = num1 + num2 + carry;
        if (temp / 10 == 0)
        {
            carry = 0;
            s = temp;
        }
        else
        {
            carry = temp / 10;
            s = temp % 10;
        }
        sum[i] = s + 48;

        num1 = 0;
        num2 = 0;
        len1--;
        len2--;
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
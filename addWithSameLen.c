#include <stdio.h>
#include <string.h>
int stringAdditionSameLength(char s1[], char s2[])
{
    int sum = 0;
    int carry = 0;
    int ans = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        sum = (s1[i] - '0') + (s2[i] - '0') + carry;
        carry = sum / 10;
        ans = ans * 10 + sum % 10;
    }
    if (carry)
        ans = ans * 10 + carry;
    return ans;
}
int main()
{
    char s1[1000], s2[1000];
    gets(s1);
    gets(s2);
    printf("%d", stringAdditionSameLength(s1, s2));
}
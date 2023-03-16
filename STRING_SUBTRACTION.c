#include <stdio.h>
#include <string.h>
void subtract(char s1[], char s2[], char result[])
{
    int i, j, k, l1, l2, carry, temp;
    l1 = strlen(s1);
    l2 = strlen(s2);
    if (l1 < l2)
    {
        char temp[10000];
        strcpy(temp, s1);
        strcpy(s1, s2);
        strcpy(s2, temp);
        l1 = strlen(s1);
        l2 = strlen(s2);
    }
    else if (l1 == l2)
    {
        for (i = 0; i < l1; i++)
        {
            if (s1[i] < s2[i])
            {
                char temp[10000];
                strcpy(temp, s1);
                strcpy(s1, s2);
                strcpy(s2, temp);
                l1 = strlen(s1);
                l2 = strlen(s2);
                break;
            }
            else if (s1[i] > s2[i])
                break;
        }
    }
    carry = 0;
    k = 0;
    for (i = l1 - 1, j = l2 - 1; i >= 0; i--, j--)
    {
        if (j >= 0)
        {
            temp = (s1[i] - '0') - (s2[j] - '0') - carry;
            if (temp < 0)
            {
                temp = temp + 10;
                carry = 1;
            }
            else
                carry = 0;
            result[k++] = temp + '0';
        }
        else
        {
            temp = (s1[i] - '0') - carry;
            if (temp < 0)
            {
                temp = temp + 10;
                carry = 1;
            }
            else
                carry = 0;
            result[k++] = temp + '0';
        }
    }
    result[k] = '\0';
    strrev(result);
}
int main()
{
    char s1[10000], s2[10000];
    gets(s1);
    gets(s2);
    char result[10000];
    subtract(s1, s2, result);
    puts(result);
}
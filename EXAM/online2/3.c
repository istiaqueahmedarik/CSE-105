#include <stdio.h>
int main()
{
    char s[10000];
    gets(s);
    int operand_index = 0, operator_index = 0;
    int operand[10000], operator[10000];
    int i = 0;
    if (s[0] == '-' || s[0] == '+')
    {
        operator[operator_index++] = s[0];
        operand[operand_index++] = 0;
        i++;
    }
    for (; s[i] != '\0'; i++)
    {
        if (s[i] == '+' || s[i] == '-')
        {
            operator[operator_index++] = s[i];
        }
        else
        {
            int num = 0;
            while (s[i] >= '0' && s[i] <= '9')
            {
                num = num * 10 + s[i] - '0';
                i++;
            }
            operand[operand_index++] = num;
            i--;
        }
    }
    int j = 0;
    int result = 0;
    for (int i = 0; i < operator_index; i++)
    {
        if (operator[i] == '-')
        {
            result = operand[j] - operand[j + 1];
        }
        else
        {
            result = operand[j] + operand[j + 1];
        }

        j++;
        operand[j] = result;
    }
    printf("%d", operand[j]);
}
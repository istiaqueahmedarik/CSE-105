#include <stdio.h>
int main()
{
    char s[1000];
    gets(s);
    int sign = 0; // 0 means '+' ,'-' otherwise
    int number = 0;
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '+')
        {
            if (sign)
            {
                sum -= number;
            }
            else
            {
                sum += number;
            }
            number = 0;
            sign = 0;
        }
        else if (s[i] == '-')
        {
            if (sign)
            {
                sum -= number;
            }
            else
            {
                sum += number;
            }
            number = 0;
            sign = 1;
        }
        else
        {
            number = number * 10 + (s[i] - '0');
        }
    }
    if (sign)
    {
        sum -= number;
    }
    else
    {
        sum += number;
    }
    printf("%d", sum);
}
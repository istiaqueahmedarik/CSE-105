#include <stdio.h>
int check_year(int number);

int main()
{
    int year;
    scanf("%d", &year);
    year = year + 1;
    while (1)
    {
        if (check_year(year) == 1)
        {
            printf("%d", year);
            break;
        }
        else
        {
            year++;
        }
    }
}

int check_year(int number)
{
    int status = 0;
    int count = 0;
    int num1 = number;
    int num = number;
    while (number != 0)
    {
        while (num != 0)
        {
            if (num % 10 == number % 10)
            {
                count++;
            }
            num /= 10;
        }
        num = num1;
        number /= 10;
    }
    if (count == 4)
    {
        status = 1;
    }
    return status;
}
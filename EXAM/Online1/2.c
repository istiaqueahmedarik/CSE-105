#include <stdio.h>
int main()
{
    char c;
    int grade;
    scanf("%c %d", &c, &grade);
    if (c == 'L')
    {
        if (grade >= 0 && grade <= 39)
        {
            printf("F");
        }
        else if (grade >= 40 && grade <= 49)
        {
            printf("D");
        }
        else if (grade >= 50 && grade <= 59)
        {
            printf("C");
        }
        else if (grade >= 60 && grade <= 69)
        {
            printf("B");
        }
        else if (grade >= 70 && grade <= 100)
        {
            printf("A");
        }
        else
        {
            printf("Invalid");
        }
    }
    else
    {
        if (grade >= 0 && grade <= 39)
        {
            printf("0.00");
        }
        else if (grade >= 40 && grade <= 49)
        {
            printf("2.00");
        }
        else if (grade >= 50 && grade <= 59)
        {
            printf("2.25");
        }
        else if (grade >= 60 && grade <= 69)
        {
            printf("3.00");
        }
        else if (grade >= 70 && grade <= 100)
        {
            printf("3.50");
        }
        else
        {
            printf("Invalid");
        }
    }
}
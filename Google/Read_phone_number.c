#include <stdio.h>
#include <string.h>
#include <math.h>
void count(int n, int size);
int countTimes(int parts, int number);
void timesName(int number);
int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        char f[10];
        char n[10];
        scanf("%s %s", n, f);
        int format[10];
        int f_count;
        int number[10];
        // s-1: split the format
        f_count = 0;
        int temp = 0;

        for (int i = 0; i <= strlen(f); i++)
        {
            if (f[i] == '-' || f[i] == '\0')
            {
                format[f_count] = temp;
                temp = 0;
                f_count++;
            }
            else
            {
                temp = temp * 10 + f[i] - 48;
            }
        }

        // s-2: split the main number by given format
        int current_position = 0;
        int temp_number = 0;
        int n_count = 0;
        int ending = 0;
        printf("Case #%d: ", t + 1);

        for (int i = 0; i < f_count; i++)
        {
            ending = current_position + format[i];
            while (current_position < ending)
            {
                temp_number = temp_number * 10 + n[current_position] - 48;
                current_position++;
            }
            number[n_count] = temp_number;
            count(temp_number, format[i]);
            temp_number = 0;
            n_count++;
        }
        printf("\n");
        // count same numnber in a small peice
        // print how much times
    }
}

void count(int n, int size)
{
    char num[30];
    char times[30];
    char current[30] = "empty";
    int parts = 0;
    int mod = size;
    int div = size - 1;
    char *numberName[10] = {"zero ", "one ",
                            "two ",
                            "three ",
                            "four ",
                            "five ",
                            "six ",
                            "seven ",
                            "eight ",
                            "nine "};
    while (div != -1)
    {
        double mod_power = pow(10, mod);
        double div_power = pow(10, div);
        parts = n % (long long int)mod_power;
        // printf("%d\n", parts);

        parts = parts / (long long int)div_power;
        // printf("%d\n", parts);
        strcpy(num, numberName[parts]);

        timesName(countTimes(parts, n));

        div = div - countTimes(parts, n);
        mod = mod - countTimes(parts, n);
        printf("%s", num);
    }

    // printf("%d ", size);
}

int countTimes(int parts, int number)
{
    int count = 0;
    while (number != 0)
    {
        if (number % 10 == parts)
        {
            count++;
        }
        number /= 10;
    }
    return count;
}

void timesName(int number)
{
    char *timeNumbers[100] = {
        "",
        "double ",
        "triple ",
        "quadruple ",
        "quintuple ",
        "sextuple ",
        "septuple ",
        "octuple ",
        "nonuple ",
        "decuple "};

    printf("%s", timeNumbers[number - 1]);
}
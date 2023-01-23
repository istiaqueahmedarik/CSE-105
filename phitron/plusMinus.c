#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    fgetc(stdin);
    int ansPlus = 0;
    int plusMax = 0;
    int ansMinus = 0;
    int minusMax = 0;
    char str[110];
    fgets(str, sizeof str, stdin);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '+')
        {
            ansPlus++;
            if (ansPlus > plusMax)
            {
                plusMax = ansPlus;
            }
        }
        else
        {

            ansPlus = 0;
        }

        if (str[i] == '-')
        {
            ansMinus++;
            if (ansMinus > minusMax)
            {
                minusMax = ansMinus;
            }
        }
        else
        {
            ansMinus = 0;
        }
    }
    if (minusMax > plusMax)
    {
        printf("%d", minusMax);
    }
    else
    {
        printf("%d", plusMax);
    }
}
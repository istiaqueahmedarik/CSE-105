#include <stdio.h>
#include <string.h>
int main()
{
    char first[5] = "bCa";
    char sec[5] = "Abc";

    for (int i = 0; i < strlen(first) - 1; i++)
    {
        if (first[i] >= 'A' && first[i] <= 'Z')
        {
            first[i] += 32;
        }
        if (sec[i] >= 'A' && sec[i] <= 'Z')
        {
            sec[i] += 32;
        }
    }

    for (int i = 0; i < strlen(first) - 1; i++)
    {
        if (first[i] > sec[i])
        {
            puts(sec);

            puts(first);
            return 0;
        }
        else if (first[i] < sec[i])
        {
            puts(first);
            puts(sec);
            return 0;
        }
    }
    puts(first);
    puts(sec);
    return 0;
}
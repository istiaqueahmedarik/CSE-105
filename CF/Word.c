#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    gets(word);
    int uppercase = 0;
    int lowercase = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 97)
        {
            lowercase++;
        }
        else
        {
            uppercase++;
        }
    }
    if (uppercase > lowercase)
    {
        for (int i = 0; i < strlen(word); i++)
        {
            if (word[i] >= 97)
            {
                word[i] = word[i] - 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < strlen(word); i++)
        {
            if (word[i] < 97)
            {
                word[i] = word[i] + 32;
            }
        }
    }
    printf("%s", word);
}
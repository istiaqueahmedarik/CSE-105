#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char s[]);
int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    sort(s);
    printf("%s", s);
}
void sort(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < strlen(s) - i; j++)
        {
            if (s[j] < s[j + 1])
            {
                int temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}
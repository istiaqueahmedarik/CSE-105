#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], temp;
    int arr[100];
    fgets(str, sizeof str, stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[j] > str[i])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    puts(str);
}
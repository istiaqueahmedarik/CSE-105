#include <stdio.h>
#include <string.h>

int main()
{
    char arr[20];
    int i, j = 0, k = 0;
    gets(arr);
    int rev[30];
    for (i = strlen(arr) - 1; i >= 0; i--)
    {
        if (j == 3)
        {

            rev[k++] = ',';
            rev[k++] = arr[i];
            j = 0;
        }
        else
        {

            rev[k++] = arr[i];
        }

        j++;
    }

    for (i = k - 1; i >= 0; i--)
    {
        printf("%c", rev[i]);
    }
}
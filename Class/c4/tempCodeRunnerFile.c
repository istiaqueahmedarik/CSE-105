#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fibb(int n, int o, int t)
{

    int fib[55];

    fib[0] = o;
    fib[1] = t;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n - 1];
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[35];
        char s1[35];
        int arr[26] = {0};
        int arr1[26] = {0};
        scanf("%s", s);
        for (int i = 0; i < strlen(s); i++)
        {
            arr[s[i] - 97]++;
        }
        scanf("%s", s1);
        for (int i = 0; i < strlen(s1); i++)
        {
            arr1[s1[i] - 97]++;
        }

        int k;
        scanf("%d", &k);

        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0 && arr1[i] == 0)
            {
                printf("%c:%d\n", i + 97, 0);
            }
            else
            {
                printf("%c:%d\n", i + 97, fibb(k + 1, arr[i], arr1[i]));
            }
        }
    }
}
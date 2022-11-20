#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        fgetc(stdin);
        int arr[100] = {0};
        for (int i = 0; i < n; i++)
        {
            char inp[100];
            fgets(inp, 100, stdin);
            char x = inp[0];
            arr[x]++;
        }
        int j;
        for (j = 97; j <= 122; j++)
        {
            if (arr[j] == 3)
            {
                printf("%c\n", j);
                break;
            }
        }
        if (j == 123)
        {
            printf("impossible\n");
        }
    }
}
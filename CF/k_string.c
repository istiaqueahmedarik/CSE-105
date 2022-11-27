#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int k;
    scanf("%d", &k);
    fgetc(stdin);
    char s[1005];
    fgets(s, 1005, stdin);
    int arr[30] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        arr[s[i] - 97] += 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if (arr[i] != 0 && arr[i] % k != 0)
        {
            printf("-1");
            return 0;
        }
    }

    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < 30; i++)
        {
            if (arr[i] != 0)
            {
                for (int p = 0; p < arr[i] / k; p++)
                {
                    printf("%c", i + 97);
                }
            }
        }
    }
}

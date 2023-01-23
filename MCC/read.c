#include <stdio.h>
#include <string.h>

int main()
{
    char s[26];
    fgets(s, sizeof(s), stdin);
    int arr[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        arr[s[i] - 97]++;
    }
    int n;
    scanf("%d", &n);
    fgetc(stdin);
    while (n--)
    {
        int flag = 0;
        char s1[20];
        fgets(s1, sizeof(s1), stdin);
        s1[strlen(s1) - 1] = 0;
        for (int i = 0; i < strlen(s1) + 2; i++)
        {
            printf("%d ", s1[i]);
        }
        for (int i = 0; i < strlen(s1); i++)
        {
            if (arr[s1[i]] == 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
}

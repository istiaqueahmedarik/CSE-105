#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[500];
    char s2[500];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    int arr[55] = {0};
    for (int i = 0; i < strlen(s1); i++)
    {

        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            arr[s1[i] - 97 + 27]++;
        }
        else if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            arr[s1[i] - 65]++;
        }
    }

    for (int i = 0; i < strlen(s2); i++)
    {

        if (s2[i] >= 'a' && s2[i] <= 'z')
        {
            if (arr[s2[i] - 97 + 27] > 0)
            {
                arr[s2[i] - 97 + 27]--;
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
        else if (s2[i] >= 'A' && s2[i] <= 'Z')
        {

            if (arr[s2[i] - 65] > 0)
            {
                arr[s2[i] - 65]--;
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[105];
    char b[105];
    fgets(a, sizeof a, stdin);
    fgets(b, sizeof b, stdin);
    int j = strlen(a) - 2;
    for (int i = 0; j != -1; i++)
    {

        if (a[i] != b[j])
        {
            printf("NO");
            return 0;
        }

        j--;
    }
    printf("YES");
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcmF(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int t;
    scanf("%d", &t);
    fgetc(stdin);
    while (t--)
    {
        char s[1000];

        char s1[1000];
        fgets(s, sizeof(s), stdin);
        s[strlen(s) - 1] = 0;
        fgets(s1, sizeof(s1), stdin);
        s1[strlen(s1) - 1] = 0;
        int len = strlen(s);
        int len1 = strlen(s1);
        int lcm = lcmF(len, len1);
        char s3[1000];
        strcpy(s3, s);
        char s4[1000];
        strcpy(s4, s1);
        for (int i = 0; i < ((lcm) / len1) - 1; i++)
        {
            strcat(s4, s1);
        }
        for (int i = 0; i < ((lcm) / len) - 1; i++)
        {
            strcat(s3, s);
        }
        if (strcmp(s3, s4) != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%s\n", s3);
        }
    }
}

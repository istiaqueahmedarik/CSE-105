#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    long long int t, s1, s2, e1, e2;
    scanf("%lld %lld %lld %lld %lld", &t, &s1, &s2, &e1, &e2);
    int x_sit;
    int y_sit;
    if ((e1 - s1) >= 0)
    {
        x_sit = 1;
    }
    else
    {
        (x_sit) = 0;
    }

    if (e2 - s2 > 0)
    {
        y_sit = 1;
    }
    else
    {
        y_sit = 0;
    }
    fgetc(stdin);
    char s[t + 5];
    fgets(s, sizeof(s), stdin);

    int time = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (x_sit == 1 && y_sit == 1)
        {
            if (s[i] == 'E' && s1 != e1)
            {
                s1++;
            }
            else if (s[i] == 'N' && s2 != e2)
            {
                s2++;
            }
        }

        else if (x_sit == 1 && y_sit == 0)
        {
            if (s[i] == 'E' && s1 != e1)
            {
                s1++;
            }
            else if (s[i] == 'S' && s2 != e2)
            {
                s2--;
            }
        }

        else if (x_sit == 0 && y_sit == 1)
        {
            if (s[i] == 'W' && s1 != e1)
            {
                s1--;
            }
            else if (s[i] == 'N' && s2 != e2)
            {
                s2++;
            }
        }

        else if (x_sit == 0 && y_sit == 0)
        {
            if (s[i] == 'W' && s1 != e1)
            {
                s1--;
            }
            else if (s[i] == 'S' && s2 != e2)
            {
                s2--;
            }
        }
        time++;
        if (s1 == e1 && s2 == e2)
        {
            printf("%d", time);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
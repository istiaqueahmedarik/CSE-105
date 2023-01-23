#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int time = 0, percent;
        scanf("%d %%", &percent);
        for (int i = percent + 1; i <= 100; i++)
        {
            if (i <= 60)
            {
                time++;
            }
            else if (i <= 80)
            {
                time += 2;
            }
            else if (i > 80)
            {
                time += 3;
            }
        }
        printf("%d minutes\n", time);
    }
}
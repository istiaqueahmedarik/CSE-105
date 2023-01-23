#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n == 1)
        {
            printf("1\n");
        }
        else
        {
            int total = 0;
            int past = 2;
            int current = 2;
            for (; total != n;)
            {

                if (current % past == 0)
                {
                    current++;
                }
                else
                {
                    printf("%d ", current);
                    past = current;
                    total++;
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}

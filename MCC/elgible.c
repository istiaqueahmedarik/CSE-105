#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        int people = 0;
        for (int j = 0; j < temp; j++)
        {
            int temp1;
            scanf("%d", &temp1);
            if (temp1 >= 10 && temp1 <= 60)
            {
                people++;
            }
        }
        printf("%d\n", people);
    }
    return 0;
}
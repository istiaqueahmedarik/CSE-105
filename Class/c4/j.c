#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int t;
        scanf("%d", &t);
        int arr[t];
        for (int i = 0; i < t; i++)
            scanf("%d", &arr[i]);

        int maxCount = 0;
        int maxSum = 0;
        int index1, index2;
        int i, j;
        for (i = 0; i < t; i++)
        {
            int sum = 0;
            int count = 0;
            for (j = i; j < t; j++)
            {
                if (sum + arr[j] < n)
                {
                    sum++;
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (sum >= maxSum)
            {
                if (sum > maxSum)
                {
                    index1 = i;
                    index2 = j;
                }
                maxSum = sum;
                if (count > maxCount)
                {
                    maxCount = count;
                    index1 = i;
                    index2 = j;
                }
            }

            sum = 0;
            count = 0;
        }
        printf("%d\n", index1);
        printf("%d\n", index2);
        int sumTemp = 0;
        for (i = 0; i < t; i++)
        {
            int sum = 0;
            int count = 0;
            for (j = i; j < t; j++)
            {
                if (sum + arr[j] < n)
                {
                    sum++;
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (sum >= sumTemp)
            {
                if (sum > sumTemp)
                {
                    index1 = i;
                    index2 = j;
                }
                maxSum = sum;
                if (count > maxCount)
                {
                    sumTemp = count;
                    index1 = i;
                    index2 = j;
                }
            }

            sum = 0;
            count = 0;
        }
    }
}
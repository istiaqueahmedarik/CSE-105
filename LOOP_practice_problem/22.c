#include <stdio.h>
int main()
{
    int n, max = -9999, min = 9999, sum = 0, freq = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp > max)
        {
            max = temp;
        }
        if (temp < min)
        {
            min = temp;
        }
        if (temp > 0)
        {
            freq++;
        }
    }
    printf("Maxim number: %d, Minimum number: %d, Sum: %d, Frequency of positive numbers: %d", max, min, sum, freq);
}
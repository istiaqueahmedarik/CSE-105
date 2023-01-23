#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        sum += value;
    }
    float ans = (float)sum / (float)n;
    printf("%0.4f", ans);
}
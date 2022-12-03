#include <stdio.h>
#include <stdbool.h>
int main()
{
    int k;
    scanf("%d", &k);
    bool toggle = true;
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        if (toggle == true)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
        if (i % 3 == 0)
        {
            toggle = !toggle;
        }
    }
    printf("%d\n", sum);
}
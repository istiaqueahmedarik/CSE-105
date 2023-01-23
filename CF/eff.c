#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int arrIndex[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arrIndex[temp] = i + 1;
    }
    int q;
    int query[100000];
    scanf("%d", &q);
    long long int lin1 = 0, lin2 = 0;
    for (int i = 0; i < q; i++)
    {
        int temp;
        scanf("%d", &temp);
        lin1 += arrIndex[temp];
        lin2 += n - arrIndex[temp] + 1;
    }

    printf("%lld %lld\n", lin1, lin2);
    return 0;
}
#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = N; i % 24 != M + 1; i++)
    {
        printf("%d ", i % 24);
    }
}
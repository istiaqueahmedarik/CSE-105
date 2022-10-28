#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int present = 1;
    int previous = 0;
    int temp = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        temp = present;
        present = present + previous;
        previous = temp;
    }
    printf("%d ", present);

    return 0;
}
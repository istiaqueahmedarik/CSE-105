#include <stdio.h>
int main()
{
    char arr[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        while (n != 0)
        {
            printf("%c", arr[n % 10 - 1]);
            n /= 10;
        }
        printf("\n");
    }
}
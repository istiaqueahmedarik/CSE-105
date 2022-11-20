#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[105];
    int oddCount = 0;
    int evenCount = 0;
    int oddindex = 0;
    int evenindex = 0;
    int index = 1;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp % 2 == 0)
        {
            evenCount++;
            evenindex = index;
        }
        else
        {
            oddCount++;
            oddindex = index;
        }
        index++;
    }
    if (oddCount == 1)
    {
        printf("%d\n", oddindex);
    }
    else
    {
        printf("%d\n", evenindex);
    }
}
#include <stdio.h>
int main()
{
    int n, m;
    int arr[105];
    int position = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }
    int left = n;
    int last = 0;
    for (int i = 0;; i = i % n)
    {
        if (i == 0)
        {
            left = 0;
        }
        if (arr[i] > 0)
        {
            arr[i] -= m;
            last = i + 1;
        }
        else
        {
            left++;
        }
        if (left == n - 1)
        {
            break;
        }
        else
        {
            left = left % (n - 1);
        }

        i++;
    }
    printf("%d", last);
}
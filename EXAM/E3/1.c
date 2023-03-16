#include <stdio.h>
#include <math.h>
int pivot(int n, int left, int right, int left_sum, int right_sum)
{
    if (left >= right)
    {
        if (left_sum == right_sum)
            return left;
        else
            return -1;
    }
    if (left_sum < right_sum)
        return pivot(n, left + 1, right, left_sum + left, right_sum);
    return pivot(n, left, right - 1, left_sum, right_sum + right);
}
int main()
{
    int n;
    scanf("%d", &n);
    if (pivot(n, 1, n, 0, 0) == -1)
        printf("No pivot");
    else
        printf("Pivot is %d", pivot(n, 1, n, 0, 0));
}
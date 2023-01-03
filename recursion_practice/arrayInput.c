#include <stdio.h>
void input(int n, int arr[])
{
    if (n == 0)
    {
        scanf("%d", &arr[0]);
        return;
    }
    input(n - 1, arr);
    scanf("%d", &arr[n]);
}
void print(int n, int arr[])
{
    if (n == 0)
    {
        printf("%d ", arr[0]);
        return;
    }
    print(n - 1, arr);
    printf("%d ", arr[n]);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    input(n - 1, arr);
    print(n - 1, arr);
}
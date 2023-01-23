#include <bits/stdc++.h>
using namespace std;
void remove(int arr[], int a, int b, int n)
{

    for (int i = b; i < n; i++)
    {
        arr[a - 1] = arr[i];
        a++;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int a, b;
    cin >> a >> b;
    remove(arr, a, b, n);
    for (int i = 0; i < n - (b - a + 1); i++)
    {
        cout << arr[i] << " ";
    }
}
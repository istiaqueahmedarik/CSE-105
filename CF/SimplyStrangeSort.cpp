#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int i = 0;
        while (!is_sorted(arr, arr + n))
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n - 2; j += 2)
                {
                    if (arr[j] > arr[j + 1])
                        swap(arr[j], arr[j + 1]);
                }
            }
            else
            {
                for (int j = 1; j < n - 1; j += 2)
                {
                    if (arr[j] > arr[j + 1])
                        swap(arr[j], arr[j + 1]);
                }
            }
            i++;
        }
        cout << i << "\n";
    }
}
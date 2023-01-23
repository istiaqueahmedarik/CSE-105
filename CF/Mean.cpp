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
        int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
            cin >> arr[i];
        sort(arr, arr + 2 * n);

        int i = 0, j = 2 * n - 1, flag = 0;
        while (i <= j)
        {

            if (flag)
            {
                cout << arr[j] << " ";
                flag = 0;
                j--;
            }
            else
            {
                cout << arr[i] << " ";
                flag = 1;
                i++;
            };
        }
        cout << "\n";
    }
}
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
            cin >> arr[i];
        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] % 2 == 0 && arr[i + 1] % 2 == 0)
                c++;
            else if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1)
                c++;
        }
        if (n == 1)
            cout << 0 << "\n";
        else
        {
            cout << c << "\n";
        }
    }
}
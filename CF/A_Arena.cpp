#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn = *min_element(arr, arr + n);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mn)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
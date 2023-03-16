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
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<int> prev(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prev[i] = prev[i - 1] + arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int i = 1, j = n + 1;
        while (i < j)
        {
            int mid = (i + j) / 2;
            if (prev[mid] >= x)
            {
                j = mid;
            }
            else
            {
                i = mid + 1;
            }
        }
        cout << i << endl;
    }
    return 0;
}
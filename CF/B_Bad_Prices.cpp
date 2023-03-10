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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        priority_queue<int, vector<int>, greater<int>> pq;
        int c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (pq.empty())
            {
                pq.push(a[i]);
                continue;
            }
            if (a[i] > pq.top())
            {
                c++;
            }
            pq.push(a[i]);
        }
        cout << c << endl;
    }
    return 0;
}
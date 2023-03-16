#include <bits/stdc++.h>
#define int long long
#define float double
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
        priority_queue<int> pq;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(x);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
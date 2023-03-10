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
        set<int> st;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        int ans = 0;
        while (!st.empty())
        {
            if (*st.rbegin() % 2)
            {
                st.erase(*st.rbegin());
            }
            else
            {
                st.insert(*st.rbegin() / 2);
                st.erase(*st.rbegin());
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
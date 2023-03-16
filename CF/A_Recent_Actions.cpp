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
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        vector<int> nms;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            nms.push_back(x);
        }
        for (int i = 1; i <= n; i++)
        {
            mp[i] = -1;
        }
        int i = 0;
        int time = 1;
        int num = n;
        int newPos = 1;
        while (1)
        {
            if (!num || i >= m)
                break;
            if (mp.find(nms[i]) == mp.end())
            {
                mp[nms[i]] = 1;
                mp[num] = newPos;
                num--;
            }
            newPos++;
            i++;
        }
        for (auto i : mp)
        {
            if (i.first <= n)
            {
                cout << i.second << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
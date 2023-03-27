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

    int n, l;
    cin >> n >> l;
    vector<int> N(n), M(n);
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> N[i] >> M[i];
        ans.push_back({min(2 * N[i], M[i]) - min(N[i], M[i]), i});
    }
    sort(ans.begin(), ans.end(), [](pair<int, int> a, pair<int, int> b)
         { return a.first > b.first; });
    int sell = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < l)
        {
            sell += min(2 * N[ans[i].second], M[ans[i].second]);
        }
        else
        {
            sell += min(N[ans[i].second], M[ans[i].second]);
        }
    }
    cout << sell << endl;

    return 0;
}
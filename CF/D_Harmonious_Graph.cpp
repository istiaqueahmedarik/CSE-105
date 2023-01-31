#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int visited[1000000];
vector<int> adList[1000000];

vector<pair<int, int>> mxMn;

void dfs(int node, int &mX)
{
    visited[node] = 1;
    mX = max(mX, node);
    for (int i = 0; i < adList[node].size(); i++)
    {
        if (visited[adList[node][i]])
            ;
        else
        {
            dfs(adList[node][i], mX);
        }
    }
}

int32_t main()
{
    IOS;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        adList[x].push_back(y);
        adList[y].push_back(x);
    }
    int diffComps = 0;
    int mx = 1;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            if (i < mx)
                diffComps++;
            dfs(i, mx);
        }
    }
    cout << diffComps << "\n";

    return 0;
}
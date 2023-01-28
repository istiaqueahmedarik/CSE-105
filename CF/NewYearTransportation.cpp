#include <bits/stdc++.h>
using namespace std;
int visited[1000000];
vector<int> adList[1000000];

void dfs(int node)
{
    visited[node] = 1;
    for (int i = 0; i < adList[node].size(); i++)
    {
        if (visited[adList[node][i]])
            ;
        else
            dfs(adList[node][i]);
    }
}

int main()
{
    int n, t;
    cin >> n >> t;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        adList[i].push_back(x + i);
    }
    dfs(1);

    if (visited[t])
        cout << "YES\n";
    else
        cout << "NO\n";
}
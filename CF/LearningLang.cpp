#include <bits/stdc++.h>
using namespace std;

vector<int> adList[1000];
int visited[1000];
void dfs(int node)
{
    visited[node] = 1;
    for (int i = 0; i < adList[node].size(); i++)
    {
        if (visited[adList[node][i]])
            ;
        else
        {
            dfs(adList[node][i]);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int sit = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        sit += x;
        for (int j = 0; j < x; j++)
        {
            int temp;
            cin >> temp;
            adList[i].push_back(temp + n);
            adList[temp + n].push_back(i);
        }
    }
    if (sit == 0)
        cout << n << "\n";
    else
    {
        int diffComps = 0;
        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == 0)
            {
                diffComps++;
                dfs(i);
            }
        }
        cout << diffComps - 1 << "\n";
    }
}
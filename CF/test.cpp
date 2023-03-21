#include <bits/stdc++.h>
using namespace std;
int visited[1000];
vector<int> adj[1000];
void dfs(int node)
{
    visited[node] = 1;
    cout << node << " ";
    for (int i = 0; i < adj[node].size(); i++)
    {
        int next = adj[node][i];
        if (visited[next] == 0)
        {
            dfs(next);
        }
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(2);
    return 0;
}
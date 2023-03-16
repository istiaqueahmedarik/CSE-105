#include <bits/stdc++.h>
using namespace std;
int visited[1000];
vector<int> adList[1000];
int col[1000];
bool bi_partitieChecker(int node, int color)
{
    visited[node] = 1;
    col[node] = color;
    for (auto child : adList[node])
    {
        if (visited[child])
        {
        }
        else
        {
            if (bi_partitieChecker(child, color ^ 1) == false)
                return false;
            else if (col[node] == col[child])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
}
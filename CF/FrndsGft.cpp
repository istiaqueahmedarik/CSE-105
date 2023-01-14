#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n + 1, {0, 0});
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i].first = x;
        v[x].second = i;
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i].first == 0 && v[i].second == 0)
        {
            for (int j = 1; j < v.size(); j++)
            {
                if (v[j].first == 0 && i != j)
                {
                    v[i].second = j;
                    v[j].first = i;
                    break;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (v[i].second == 0)
        {
            for (int j = 1; j < v.size(); j++)
            {
                if (v[j].first == 0 && i != j)
                {
                    v[i].second = j;
                    v[j].first = i;
                    break;
                }
            }
        }
    }

    for (int i = 1; i < v.size(); i++)
    {
        cout << v[i].first << " ";
    }
}

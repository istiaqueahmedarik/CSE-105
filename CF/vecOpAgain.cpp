#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(n);
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            int x;
            cin >> x;
            v[b].push_back(x);
        }
        else
        {
            if (a == 1)
            {
                for (int i = 0; i < v[b].size(); i++)
                {
                    if (i == v[b].size() - 1)
                    {
                        cout << v[b][i];
                    }
                    else
                    {
                        cout << v[b][i] << " ";
                    }
                }
                cout << "\n";
            }
            else
            {
                v[b].clear();
            }
        }
    }
}
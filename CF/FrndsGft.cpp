#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> available(n + 1, 0);
    vector<int> none;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        available[v[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (available[i] == 0)
        {
            none.push_back(i);
        }
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            if (none.size() > 1)
            {
                none[]
            }
        }
        else
        {
            cout << v[i] << " ";
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        vector<int> v1(n);
        map<int, int> ps;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v1[i] = v[i];
        }
        sort(v1.begin(), v1.end());
        int c = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            ps[v1[i]] = i;
        }
        // cout << "\n";
        for (int i = 0; i < n; i++)
        {
            // main-->sort-->sort-1
            if (ps[v[i]] > 0 && i > 0 && v1[ps[v[i]] - 1] == v[i - 1])
                continue;
            else
                c++;
        }
        {
            (c <= k) ? cout << "Yes\n" : cout << "No\n";
        }
    }
}
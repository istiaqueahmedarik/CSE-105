#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int32_t main()
{
    IOS;
    int n, m;
    cin >> n >> m;
    set<pair<int, int>> s;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
            swap(x, y);
        s.insert({x, y});
    }
    vector<int> arr1(n + 1);
    vector<int> arr2(n + 1);
    int i, j, first, sec;
    if (m == n * (n - 1) / 2)
    {
        cout << "NO\n";
        return 0;
    }

    else
    {
        for (i = 1; i <= n; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                if (i != j)
                {
                    if (s.count({i, j}) == 0)
                    {
                        first = i;
                        sec = j;
                        i = n + 1;
                        j = n + 1;
                    }
                }
            }
        }
    }
    arr1[first] = 1;
    arr1[sec] = 2;
    arr2[first] = 1;
    arr2[sec] = 1;
    int p = 3;
    for (int i = 1; i <= n; i++)
    {
        if (i == first || i == sec)
            continue;
        else
        {
            arr1[i] = p;
            arr2[i] = p;
            p++;
        }
    }
    cout << "YES\n";
    for (int i = 1; i <= n; i++)
        cout << arr1[i] << " ";
    cout << "\n";
    for (int i = 1; i <= n; i++)
        cout << arr2[i] << " ";
    cout << "\n";
    return 0;
}
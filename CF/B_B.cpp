#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp < i + 1)
            {
                a.emplace_back(temp);
                b.emplace_back(i + 1);
            }
        }
        int c = 0;
        for (int i = 0; i < a.size(); i++)
        {
            c += lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        }
        cout << c << endl;
    }
    return 0;
}
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
    int cs = 1;
    while (t--)
    {
        cout << "Case " << cs++ << ":" << endl;
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        while (k--)
        {
            string s;
            int a;
            cin >> s >> a;
            if (s == "a")
            {
                v.push_back(a);
            }
            else
            {
                if (a - 1 >= v.size())
                {
                    cout << "none" << endl;
                }
                else
                {
                    cout << v[a - 1] << endl;
                    v.erase(v.begin() + a - 1);
                }
            }
        }
    }
    return 0;
}
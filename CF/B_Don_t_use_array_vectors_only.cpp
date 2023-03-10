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
        vector<int> v(n);
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even % 2 == 0 && odd % 2 == 0)
            cout << "YES" << endl;
        else if (even % 2 != 0 && odd % 2 != 0)
        {
            int flag = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (abs(v[i] - v[j]) == 1 && v[i] % 2 != v[j] % 2)
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 0)
                    break;
            }
            if (flag == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
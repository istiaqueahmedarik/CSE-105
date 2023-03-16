#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
set<int> cubes;
void precompute()
{
    for (int i = 1; i <= 1000000; i++)
    {
        cubes.insert(i * i * i);
    }
}
int32_t main()
{
    IOS;
    precompute();
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int flag = 1;
        for (int i = 1; i * i * i <= x; i++)
        {
            if (cubes.find(x - i * i * i) != cubes.end())
            {
                cout << "YES" << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
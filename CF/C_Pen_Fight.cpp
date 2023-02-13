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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n]; // main array
        map<int, int> mp, mp1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = i;
            mp1[i]++;
        }
        int q;
        cin >> q;
        while (q--)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                int a, b;
                cin >> a >> b;
                if (mp1[a - 1] == 0 || mp1[b - 1] == 0)
                {
                }
                else if (arr[a - 1] > arr[b - 1])
                {
                    arr[a - 1] += arr[b - 1];
                    arr[b - 1] = 0;
                    mp[arr[b - 1]] = a - 1;
                    mp1[a - 1] += mp1[b - 1];
                    mp1[b - 1] = 0;
                }
                else if (arr[b - 1] > arr[a - 1])
                {
                    arr[b - 1] += arr[a - 1];
                    arr[a - 1] = 0;
                    mp[arr[a - 1]] = b - 1;
                    mp1[b - 1] += mp1[a - 1];
                    mp1[a - 1] = 0;
                }
                else
                {
                }
            }
            else if (x == 2)
            {
                int p;
                cin >> p;
                cout << mp1[p - 1] << endl;
            }
            else
            {
                int p;
                cin >> p;
                cout << mp[p - 1] + 1 << endl;
            }
        }
    }
    return 0;
}
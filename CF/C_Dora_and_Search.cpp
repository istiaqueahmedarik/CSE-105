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
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x] = i + 1;
        }
        int mx = n;
        int mn = 1;
        int i = 1, j = n;
        int flag = 1;
        while (i <= j)
        {
            if (freq[mn] == i)
            {
                i++;
                mn++;
            }
            else if (freq[mn] == j)
            {
                j--;
                mn++;
            }
            if (freq[mx] == i)
            {
                i++;
                mx--;
            }
            else if (freq[mx] == j)
            {
                j--;
                mx--;
            }
            if (freq[mn] != i && freq[mn] != j && freq[mx] != i && freq[mx] != j)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << -1 << endl;
        else
            cout << i << " " << j << endl;
    }
    return 0;
}
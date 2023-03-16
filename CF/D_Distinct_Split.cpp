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
        string s;
        cin >> s;
        int arr[26] = {0};
        int arr1[26] = {0};
        vector<int> fr(n, 0), b(n, 0);
        fr[0] = 1;
        b[n - 1] = 1;
        arr[s[0] - 'a'] = 1;
        arr1[s[n - 1] - 'a'] = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[s[i] - 'a'] == 0)
            {
                fr[i] = fr[i - 1] + 1;
            }
            else
            {
                fr[i] = fr[i - 1];
            }
            arr[s[i] - 'a']++;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr1[s[i] - 'a'] == 0)
            {
                b[i] = b[i + 1] + 1;
            }
            else
            {
                b[i] = b[i + 1];
            }
            arr1[s[i] - 'a']++;
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, fr[i] + b[i + 1]);
        }
        if (ans > n)
            ans = n;
        cout << ans << endl;
    }
    return 0;
}
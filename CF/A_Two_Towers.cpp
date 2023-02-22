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
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        reverse(s1.begin(), s1.end());
        string s3 = s2 + s1;
        int i = 0, j = 1;
        int c = 0;
        while (j <= s3.size() - 1)
        {
            if (s3[i] == s3[j])
                c++;
            i++;
            j++;
        }
        if (c <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
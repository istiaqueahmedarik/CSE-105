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
    string s;
    cin >> s;
    vector<int> v;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        v.push_back(s[i] - '0');
    }
    int sumOdd = 0, sumEven = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
            sumEven += v[i];
        else
            sumOdd += v[i];
    }
    if ((sumEven - sumOdd) % 11 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
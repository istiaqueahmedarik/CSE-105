#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

string s;

void string_make()
{
    for (int i = 1; s.size() <= 100; i++)
    {
        if (i % 3 == 0)
            s += "F";
        if (i % 5 == 0)
            s += "B";
    }
}

int32_t main()
{
    IOS;
    string_make();
    int t;
    cin >> t;
    // cout << s << endl;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        if (s.find(str) != string::npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
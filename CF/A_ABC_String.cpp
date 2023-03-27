#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

bool valid_brackets(string s)
{
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            cnt++;
        else
            cnt--;
        if (cnt < 0)
            return false;
    }
    return cnt == 0;
}

int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<char> possible = {'(',
                                 ')'};
        int flag = 1;
        for (int i = 1; i <= 8; i++)
        {
            char c1 = possible[(i >> 2) & 1];
            char c2 = possible[(i >> 1) & 1];
            char c3 = possible[i & 1];
            string temp = "";
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'A')
                    temp += c1;
                else if (s[j] == 'B')
                    temp += c2;
                else
                    temp += c3;
            }
            if (valid_brackets(temp))
            {
                cout << "YES" << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
    }
    return 0;
}
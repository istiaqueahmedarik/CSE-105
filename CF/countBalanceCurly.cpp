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
    int n = s.size();
    int count = 0;
    int flag = 1;
    // check balance bracket
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{')
            st.push(s[i]);
        else if (s[i] == '}')
        {
            if (st.empty())
            {
                flag = 0;
                break;
            }
            else
            {
                st.pop();
                count += 2;
            }
        }
    }
    if (flag && st.empty())
        cout << count << endl;
    else
        cout << "0" << endl;
    return 0;
}
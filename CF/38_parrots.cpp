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
    int n;
    cin >> n;
    vector<int> arr;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == '+')
        {
            int x = s[1] - '0';
            arr.push_back(x);
        }
        else if (s[0] == '?')
        {
            int mn = *min_element(arr.begin(), arr.end());
            int flag = 0;
            for (int i = 0; i < arr.size(); i++)
            {
                if (arr[i] % mn)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag)
                cout << "N"
                     << "\n";
            else
            {
                cout << "Y"
                     << mn << "\n";
            }
        }
        else
        {
            if (arr.empty())
            {
            }
            else
            {
                arr.erase(arr.begin());
            }
        }
    }
    return 0;
}

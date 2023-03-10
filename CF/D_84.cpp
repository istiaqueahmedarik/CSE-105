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
    int t;
    cin >> t;
    while (t--)
    {
        multiset<int> lower;
        multiset<int> upper;
        while (1)
        {
            int x;
            cin >> x;
            if (x == 0)
                break;
            if (x == -1)
            {
                cout << *lower.rbegin() << endl;
                lower.erase(lower.find(*lower.rbegin()));
                if (lower.size() < upper.size())
                {
                    lower.insert(*upper.begin());
                    upper.erase(upper.find(*upper.begin()));
                }
            }
            else
            {
                if (lower.empty() || x <= *lower.rbegin())
                    lower.insert(x);
                else
                    upper.insert(x);
                if (lower.size() > upper.size() + 1)
                {
                    upper.insert(*lower.rbegin());
                    lower.erase(lower.find(*lower.rbegin()));
                }
                else if (upper.size() > lower.size())
                {
                    lower.insert(*upper.begin());
                    upper.erase(upper.find(*upper.begin()));
                }
            }
        }
    }
    return 0;
}
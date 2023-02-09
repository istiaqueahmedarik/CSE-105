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
    string s;
    cin >> s;
    int p1, p2, l;
    cin >> p1 >> p2 >> l;
    string mc = s;
    for (int i = 0; i < l; i++)
    {
        mc[p2 + i - 1] = mc[p1 + i - 1];
    }
    cout << mc << endl;
    string mv = s;
    for (int i = 0; i < l; i++)
    {
        mv[p2 + i - 1] = s[p1 + i - 1];
    }
    cout << mv << endl;
    return 0;
}
#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

struct student
{
    string s;
    int a, b, c, d;
};

int32_t main()
{
    IOS;
    int t;
    cin >> t;
    vector<student> v;
    while (t--)
    {
        string s;
        int a, b, c, d;
        cin >> s >> a >> b >> c >> d;
        v.push_back({s, a, b, c, d});
    }
    sort(v.begin(), v.end(), [](student a, student b)
         {
             if (a.a + a.b + a.c + a.d == b.a + b.b + b.c + b.d)
             {
                 return a.s < b.s;
             }
             return a.a + a.b + a.c + a.d > b.a + b.b + b.c + b.d; });
    for (auto i : v)
    {
        cout << i.s << " " << i.a + i.b + i.c + i.d << " " << i.a << " " << i.b << " " << i.c << " " << i.d << endl;
    }
    return 0;
}
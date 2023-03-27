#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
struct people
{
    string s1;
    int lv;
    int id;
};
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    vector<people> v;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int lv;
        if (s2 == "rat")
        {
            lv = 5;
        }
        else if (s2 == "woman" || s2 == "child")
        {
            lv = 3;
        }
        else if (s2 == "man")
        {
            lv = 2;
        }
        else
        {
            lv = 1;
        }

        v.push_back({s1, lv, i});
    }
    sort(v.begin(), v.end(), [](people a, people b)
         {
             if (a.lv == b.lv)
             {
                 return a.id < b.id;
             }
             return a.lv > b.lv; });
    for (auto i : v)
    {
        cout << i.s1 << endl;
    }
    return 0;
}
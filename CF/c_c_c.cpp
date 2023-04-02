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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            ans.push_back((v[i + 1] - v[i]) / 2);
        }
    }
    sort(ans.begin(), ans.end());
    if (ans.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans[0] << endl;
    }
    return 0;
}

/*
    n particle inside of a collider
    in straight line
    all the pos is distinct and even
    we know the direction of particle right or left
    when first collision will happen?? :/
*/
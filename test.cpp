#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, a, y, b;
        cin >> x >> a >> y >> b;
        if (a * log(x) == b * log(y))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
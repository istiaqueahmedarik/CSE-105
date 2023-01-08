#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll number = 1;
        ll unmatch = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == number)
                number++;
            else
                unmatch++;
        }
        cout << ((unmatch + k - 1) / k) << "\n";
    }
}
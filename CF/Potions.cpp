#include <bits\stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> box;
    ll sum = 0, count = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (sum + x >= 0)
        {
            sum += x;
            count++;
            if (x < 0)
            {
                box.push(x);
            }
        }
        else
        {
            if (box.size())
            {
                ll lasT = box.top();
                if (lasT < x)
                {
                    sum -= lasT;
                    sum += x;
                    box.pop();
                    box.push(x);
                }
            }
        }
    }
    cout << count;
}
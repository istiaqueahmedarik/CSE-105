#include <bits\stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;
    if (a == b)
        cout << 0 << "\n";
    else if (b % a != 0)
        cout << -1 << "\n";
    else
    {
        ll ratio = b / a;
        while (ratio % 2 == 0)
        {
            ratio /= 2;
            cnt++;
        }
        while (ratio % 3 == 0)
        {
            ratio /= 3;
            cnt++;
        }
        if (ratio != 1)
            cout << -1 << "\n";
        else
            cout << cnt << "\n";
    }
}
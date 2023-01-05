#include <bits\stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        if (k == 1)
            cout << -1 << "\n";
        else
            cout << k - 1 << "\n";
    }
}
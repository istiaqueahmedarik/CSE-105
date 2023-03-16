#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    int mn = min(a, b);
    if (mx == mn && mx != 0)
    {
        cout << "Even " << mx * 2 << "\n";
    }
    else if (mx == 0 && mn == 0)
        cout << "Not a moose\n";
    else
    {
        cout << "Odd " << mx * 2 << "\n";
    }
}
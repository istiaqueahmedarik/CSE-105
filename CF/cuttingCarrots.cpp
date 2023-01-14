#include <bits/stdc++.h>
#define ll long long
#define dd double
using namespace std;
int main()
{
    dd a, b;
    cin >> a >> b;
    for (dd i = 1; i < a; i++)
    {
        double x = b * sqrt(i / a);
        cout << setprecision(12) << fixed << x << " ";
    }
}
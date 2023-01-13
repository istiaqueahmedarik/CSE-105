#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int cost = 0;
    int m1, c1, m2, c2;
    if (max(a, b) == a)
    {
        m1 = n;
        c1 = a;
        c2 = b;
        m2 = m;
    }
    else
    {
        m1 = m;
        c1 = b;
        c2 = a;
        m2 = n;
    }
    while (n != 0)
    {
        if (n % m1 == 0)
        {
            cost += (n / m1) * c1;
            break;
        }
        else
        {
            n--;
            cost += a;
        }
    }

    cout << cost << "\n";
}
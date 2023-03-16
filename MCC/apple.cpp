#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = 0;
    for (int i = a; i >= 1; i--)
    {
        if (a * 2 <= b && a * 4 <= c)
        {
            d = (a + 2 * a + 4 * a);

            break;
        }
        a--;
    }
    cout << d << "\n";
}
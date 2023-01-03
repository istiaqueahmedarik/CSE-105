#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = 0;
    int y = 0;
    int so = 1, n = -1, e = 1, w = -1;
    for (int i = 0; i < s.length(); i++)
    {
        {
            if (s[i] == 'W')
                x += w;
            if (s[i] == 'E')
                x += e;
            if (s[i] == 'N')
                y += n;
            if (s[i] == 'S')
                y += so;
        }
    }
    if (x == 0 && y == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
}
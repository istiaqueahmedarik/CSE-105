#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0, j = s.size() - 1;
    int ans = 0;
    while (i < j)
    {
        // no need to add x
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        // need to add x on right
        else if (s[i] == 'x')
        {
            i++;
            ans++;
        }
        // need to add x on left
        else if (s[j] == 'x')
        {
            j--;
            ans++;
        }
        else
        {
            ans = -1;
            break;
        }
    }
    cout << ans;
}
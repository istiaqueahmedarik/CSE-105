#include <bits\stdc++.h>
using namespace std;
bool pal(string s)
{
    if (s.length() == 1 || s.length() == 0)
        return true;
    if (s[0] == s[s.length() - 1])
    {
        return pal(s.substr(1, s.length() - 2));
    }
    return false;
}
int main()
{
    string s;
    cin >> s;
    if (pal(s))
        cout << "Yes";
    else
        cout << "No";
}
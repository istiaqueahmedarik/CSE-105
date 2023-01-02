#include <bits\stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    cin >> s;
    cin >> s1;
    reverse(s.begin(), s.end());
    if (s == s1)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}
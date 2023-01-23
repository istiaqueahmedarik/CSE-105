#include <bits\stdc++.h>
using namespace std;
int subT(string s1, string s2)
{
    string s = s1;
    string s3 = s2;
    sort(s.begin(), s.end());
    sort(s3.begin(), s3.end());
    if (s.compare(s3) == 0)
        return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.length() > s2.length())
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            int l = 0;
            int r = s1.length();
            while (r <= s2.length())
            {
                string sub = s2.substr(l, r - l);

                if (subT(s1, sub) == 0)
                {
                    cout << "YES"
                         << "\n";
                    break;
                }
                l++;
                r++;
            }
            if (r == s2.length() + 1)
                cout << "NO\n";
        }
    }
}
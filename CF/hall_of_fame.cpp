#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = count(s.begin(), s.end(), 'L');
        int r = count(s.begin(), s.end(), 'R');
        if (l == 0 || r == 0)
            cout << "-1\n";
        else
        {
            string sub1 = s.substr(0, n / 2);
            string sub2 = s.substr(n / 2, n - 1);
            int l = count(sub2.begin(), sub2.end(), 'L');
            int r = count(sub1.begin(), sub1.end(), 'R');
            if (r != 0 && l != 0)
            {
                cout << "0\n";
            }
            else
            {
                int found = s.find("LR");
                cout << found + 1 << "\n";
            }
        }
    }
}
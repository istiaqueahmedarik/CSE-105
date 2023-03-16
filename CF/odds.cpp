#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int oddsCnt = 0, evenCnt = 0;
        vector<int> odds, even;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                even.push_back(i);
                evenCnt++;
            }
            else
            {
                odds.push_back(i);
                oddsCnt++;
            }
        }
        if (evenCnt >= 2 && oddsCnt >= 1)
        {
            cout << "YES\n";
            cout << even[0] + 1 << " " << even[1] + 1 << " " << odds[0] + 1 << "\n";
        }
        else if (oddsCnt >= 3)
        {
            cout << "YES\n";
            cout << odds[0] + 1 << " " << odds[1] + 1 << " " << odds[2] + 1 << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
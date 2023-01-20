#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int flag = 0;
        while (a >= 0)
        {
            if (a % 11 == 0)
            {
                cout << "YES\n";
                flag = 1;
                break;
            }
            a -= 111;
        }
        if (flag == 0)
            cout << "NO\n";
    }
}
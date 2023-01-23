#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x;
    cin >> a >> b >> x;
    string s;
    int flag = 0;
    int cA = 0;
    int cB = 0;
    for (int i = 0; i < a + b; i++)
    {
        if (x != 0)
        {
            if (flag == 0)
            {
                flag = 1;
                s += '1';
                cA++;
            }
            else
            {
                flag = 0;
                s += '0';
                cB++;
            }
            x--;
        }
        else
        {
            if (flag == 1)
            {
                if (cA != a)
                {
                    s += '0';
                    cA++;
                }
                else
                {
                    flag = 0;
                    i--;
                }
            }
            else
            {
                if (cB != b)
                {
                    s += '1';
                    cB++;
                }
                else
                {
                    flag = 1;
                    i--;
                }
            }
        }
    }
    cout << s << "\n";
}
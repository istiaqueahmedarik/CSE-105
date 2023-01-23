#include <bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    int n, k;
    cin >> n >> k;
    cin >> s;
    int length = n;
    for (int i = 0; i < n; i++)
    {
        if (length == k)
        {
            cout << s;
            return 0;
        }
        else
        {
            if (s[i] == ')')
            {
                s.erase(i - 1, 2);
                length -= 2;
                i -= 2;
            }
        }
    }
}
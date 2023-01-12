#include <bits/stdc++.h>
using namespace std;
int checker(string sub1, string sub3, string sub2)
{
    if (lexicographical_compare(sub1.begin(), sub1.end(), sub3.begin(), sub3.end()) && lexicographical_compare(sub2.begin(), sub2.end(), sub3.begin(), sub3.end()))
    {
        return 1;
    }
    else if (lexicographical_compare(sub1.begin(), sub1.end(), sub3.begin(), sub3.end()) == false && lexicographical_compare(sub2.begin(), sub2.end(), sub3.begin(), sub3.end()) == false)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string sub1, sub2, sub3;
        int flag = 0;
        int i = 1;
        int j = s.size() - 2;
        while (i <= j)
        {
            sub1 = s.substr(0, i);
            sub2 = s.substr(j + 1, s.size() - j);
            sub3 = s.substr(i, j);
            i++;
            j--;
            if (checker(sub1, sub3, sub2) == 1)
            {
                flag = 1;
                break;
            }
            cout << sub1 << " " << sub3 << " " << sub2 << "\n";
        }
        if (flag == 0)
            cout << ":(\n";
        else
            cout << sub1 << " " << sub3 << " " << sub2 << "\n";
    }
}
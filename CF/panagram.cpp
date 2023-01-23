#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (int i = 0; i < n; i++)
    {
        freq[(s[i] | 32) - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
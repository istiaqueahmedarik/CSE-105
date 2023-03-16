#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    for (int j = 1; j <= t; j++)
    {
        {
            string s1, s2;
            getline(cin, s1);
            getline(cin, s2);
            int freq[26] = {0};
            int freq1[26] = {0};
            for (int i = 0; i < s1.size(); i++)
            {
                if (s1[i] == ' ')
                    continue;
                s1[i] |= 32;

                freq[(s1[i]) - 97]++;
            }
            for (int i = 0; i < s2.size(); i++)
            {

                if (s2[i] == ' ')
                    continue;
                s2[i] |= 32;
                freq1[s2[i] - 97]++;
            }

            int i;
            for (i = 0; i < 26; i++)
            {
                if (freq[i] != freq1[i])
                {
                    cout << "Case " << j << ": "
                         << "No\n";
                    break;
                }
            }
            if (i == 26)
            {
                cout << "Case " << j << ": "
                     << "Yes\n";
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
int longest_common_sub(string s1, string s2)
{
    vector<vector<int>> matrix(s1.size() + 1, vector<int>(s2.size() + 1, 0));
    int ans = 0;

    for (int i = 1; i <= s1.size(); i++)
    {
        for (int j = 1; j <= s2.size(); j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                matrix[i][j] = 1 + matrix[i - 1][j - 1];
                ans = max(ans, matrix[i][j]);
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() > s2.size())
            swap(s1, s2);

        cout << s1.size() + s2.size() - 2 * longest_common_sub(s1, s2) << "\n";
    }
}
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
bool palindrome(string s)
{
    int n = s.length();
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        vector<string> possible_ans;
        // if we remove only right side
        int j = n - 1;
        while (j >= 0)
        {
            string temp = s.substr(0, j);
            if (palindrome(temp))
            {
                possible_ans.push_back(temp);
            }
            j--;
        }
        // if we remove only left side
        int i = 0;
        while (i < n)
        {
            string temp = s.substr(i, n - i);
            if (palindrome(temp))
            {
                possible_ans.push_back(temp);
            }
            i++;
        }
        // if we remove both side
        i = (n / 2);
        j = (n / 2);
        while (i >= 0 && j < n)
        {
            string temp = s.substr(0, i) + s.substr(j, n - j);
            // remove ith character only
            string temp2 = s.substr(0, i) + s.substr(i + 1, n - i - 1);
            if (palindrome(temp2))
            {
                possible_ans.push_back(temp2);
            }
            // remove jth character only
            string temp3 = s.substr(0, j) + s.substr(j + 1, n - j - 1);
            if (palindrome(temp3))
            {
                possible_ans.push_back(temp3);
            }
            if (palindrome(temp))
            {
                possible_ans.push_back(temp);
            }
            i--;
            j++;
        }
        string ans = possible_ans[0];
        for (int i = 1; i < possible_ans.size(); i++)
        {
            if (possible_ans[i].length() > ans.length())
            {
                ans = possible_ans[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
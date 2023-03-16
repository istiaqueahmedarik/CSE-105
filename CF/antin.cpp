#include <bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '{' && s[i] != ',' && s[i] != ' ')
        {
            arr[s[i] - 'a']++;
        }
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i])
            count++;
    }
    cout << count << "\n";
}
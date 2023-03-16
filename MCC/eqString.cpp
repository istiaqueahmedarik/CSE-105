#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        vector<char> bracket;
        getline(cin, s);
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                continue;
            if (s[i] == '(' || s[i] == '[')
                bracket.push_back(s[i]);
            else if (bracket.empty())
            {
                flag = 1;
                break;
            }
            else
            {
                if (s[i] == ')')
                {
                    if (bracket.empty())
                    {
                        flag = 1;
                        break;
                    }
                    if (bracket.back() == '(')
                        bracket.pop_back();

                    else
                    {

                        flag = 1;
                        break;
                    }
                }
                else if (s[i] == ']')
                {
                    if (bracket.empty())
                    {
                        flag = 1;
                        break;
                    }
                    if (bracket.back() == '[')
                    {
                        bracket.pop_back();
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if (!flag && bracket.size() == 0)
            cout << "Yes\n";
        else
        {
            cout << "No\n";
        }
    }
}
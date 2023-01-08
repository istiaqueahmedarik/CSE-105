#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool checker(vector<int> v)
{
    for (int i = 0; i < 12; i++)
    {
        if (v[i] == 0 && v[i + 1] > 0)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> clubs(13, 0);
    vector<int> diamonds(13, 0);
    vector<int> hearts(13, 0);
    vector<int> spades(13, 0);

    for (int i = 0; i < n; i++)
    {
        string s;
        int a;
        cin >> a >> s;
        if (s == "C")
            clubs[a - 1]++;
        if (s == "D")
            diamonds[a - 1]++;
        if (s == "H")
            hearts[a - 1]++;
        if (s == "S")
            spades[a - 1]++;
    }

    if (n == 26)
    {
        for (int i = 0; i < 4; i++)
        {
            switch (i)
            {
            case 0:
                if (checker(clubs))
                {
                    cout << "possible\n";
                    return 0;
                }
                break;

            case 1:
                if (checker(diamonds))
                {
                    cout << "possible\n";
                    return 0;
                }
                break;
            case 2:
                if (checker(hearts))
                {
                    cout << "possible\n";
                    return 0;
                }
                break;
            case 3:
                if (checker(spades))
                {
                    cout << "possible\n";
                    return 0;
                }
                break;

            default:
                break;
            }
        }
        cout << "impossible\n";
    }
    else if (n > 26)
        cout << "possible\n";
    else
        cout << "impossible\n";
}
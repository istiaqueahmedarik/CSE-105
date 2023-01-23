#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 2)
            v.pop_back();
        else
        {
            int b;
            cin >> b;
            if (a == 0)
            {
                v.push_back(b);
            }
            else
            {
                cout << v[b] << "\n";
            }
        }
    }
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), a);
        if (v[low - v.begin()] != a)
        {
            cout << "No "
                 << (low - v.begin() + 1) << "\n";
        }
        else
        {
            cout << "Yes "
                 << (low - v.begin() + 1) << "\n";
        }
    }
}
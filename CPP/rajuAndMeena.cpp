#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int cs = 0;
    while (1)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        cs++;
        cout << "CASE# " << cs << ":\n";
        while (q--)
        {
            int a;
            cin >> a;
            vector<int>::iterator low = lower_bound(v.begin(), v.end(), a);
            if (v[low - v.begin()] == a)
            {
                int x = low - v.begin() + 1;
                cout << a << " found at " << x << "\n";
            }
            else
            {
                cout << a << " not found\n";
            }
        }
    }
}
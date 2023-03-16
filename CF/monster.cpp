#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int c = 0;
        sort(v.begin(), v.end());
        int cNt = count(v.begin(), v.end(), 1);
        c = v.size() - cNt / 2;

        cout << c << "\n";
    }
}
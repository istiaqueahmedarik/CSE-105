#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= a)
            c1++;
        else if (v[i] >= a + 1 && v[i] <= b)
            c2++;
        else
            c3++;
    }
    cout << min({c1, c2, c3});
}
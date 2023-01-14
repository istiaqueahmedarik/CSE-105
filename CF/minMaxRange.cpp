#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i = 1;
    while (cin >> n)
    {
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        cout << "Case " << i << ": " << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()) << "\n";
        i++;
    }
}
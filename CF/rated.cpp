#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i] >> v2[i];
        if (v1[i] != v2[i])
            flag = 1;
    }
    if (flag == 1)
    {
        cout << "rated\n";
    }
    else if (is_sorted(v1.begin(), v1.end(), greater<int>()))
    {
        cout << "maybe\n";
    }
    else
    {
        cout << "unrated\n";
    }
}
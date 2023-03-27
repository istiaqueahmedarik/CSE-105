#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, q;
    cin >> n >> q;
    vector<long long> a;
    for (int i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        a.emplace_back(temp);
    }
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "sort")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            sort(a.begin() + l - 1, a.begin() + r);
        }
        else if (s == "reverse")
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            reverse(a.begin() + l - 1, a.begin() + r);
        }
        else if (s == "front")
        {
            cout << a.front() << endl;
        }
        else if (s == "back")
        {
            cout << a.back() << endl;
        }
        else if (s == "print")
        {
            int ind;
            cin >> ind;
            cout << a[ind - 1] << endl;
        }
        else if (s == "push_back")
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        else if (s == "pop_back")
        {
            a.pop_back();
        }
    }
    return 0;
}
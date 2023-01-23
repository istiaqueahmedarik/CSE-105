#include <bits/stdc++.h>
using namespace std;
int checker(vector<int> v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (sum == v[i])
            return 1;
        else
        {
            sum += v[i];
        }
    }
    return 0;
}
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
        sort(v.begin(), v.end());
        vector<int> ans;
        int flag = 0;
        int i = 0, j = n - 1;
        for (int k = 0; k < n; k++)
        {
            if (flag == 0)
            {
                ans.push_back(v[i]);
                i++;
                flag = 1;
            }
            else
            {
                ans.push_back(v[j]);
                j--;
                flag = 0;
            }
        }
        // for (int i = 0; i < n; i++)
        //     cout << ans[i] << " ";
        if (checker(ans))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << ans[i] << " ";
            cout << "\n";
        }
    }
}
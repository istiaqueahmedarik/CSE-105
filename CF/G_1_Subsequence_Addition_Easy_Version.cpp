#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int flag = 1;
        int sum = 1;
        if (arr[0] != 1)
        {
            flag = 0;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (arr[i] > sum)
                {
                    flag = 0;
                    break;
                }
                else
                {
                    sum += arr[i];
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
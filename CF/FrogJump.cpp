#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
vector<int> memo(1000000, -1);
int frog(int index, int arr[])
{
    if (index == 0)
        return 0;
    if (index == 1)
        return abs(arr[1] - arr[0]);
    if (memo[index] != -1)
        return memo[index];
    int left = frog(index - 1, arr) + abs(arr[index] - arr[index - 1]);
    int right = frog(index - 2, arr) + abs(arr[index] - arr[index - 2]);

    return memo[index] = min(left, right);
}
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
            cin >> arr[i];
        cout << frog(n - 1, arr) << endl;
    }
    return 0;
}
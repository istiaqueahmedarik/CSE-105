#include <bits\stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    vector<double> arr;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    double diff = 0;
    for (long long i = 0; i < n - 1; i++)
    {
        diff = max(diff, arr[i + 1] - arr[i]);
    }
    double ans = max(max(arr[0], m - arr[n - 1]), diff / 2);
    cout << fixed << setprecision(9) << ans;
}
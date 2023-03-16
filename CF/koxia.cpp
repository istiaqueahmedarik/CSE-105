#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<long long> arr;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        long long min = *min_element(arr.begin(), arr.end());
        long long index = distance(arr.begin(), find(arr.begin(), arr.end(), min));
        for (long long i = 0; i < m; i++)
        {
            long long y;
            cin >> y;
            long long min = *min_element(arr.begin(), arr.end());
            long long index = distance(arr.begin(), find(arr.begin(), arr.end(), min));
            arr[index] = y;
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum << "\n";
    }
}
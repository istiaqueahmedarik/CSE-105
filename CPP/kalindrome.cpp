#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n + 1] = {0};
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr[x]++;
        }
        long long odds = 0;
        long long even = 0;
        for (long long i = 0; i < n + 1; i++)
        {
            if (arr[i] % 2 == 0)
                even++;
            else
                odds++;
        }
        if (odds == 2 || odds == 1)
            cout << "YES\n";

        else
        {
            cout << "NO\n";
        }
    }
}
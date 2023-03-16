#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
map<int, int> prime;
void sieve(int n)
{
    prime[2] = 1;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == 0)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = 1;
        }
    }
}

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sieve(n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cout << prime[arr[i]];
    }
    cout << c << "\n";
    return 0;
}

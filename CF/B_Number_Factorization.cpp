#include <bits/stdc++.h>
#define int long long
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
        map<int, int> freq_of_power;
        int maX = 1;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                int c = 0;
                while (n % i == 0)
                {
                    freq_of_power[i]++;
                    c++;
                    n /= i;
                }
                maX = max(maX, c);
            }
        }

        if (n != 1)
            freq_of_power[n] = 1;
        int ans = 0;
        for (int i = 0; i < maX; i++)
        {
            int temp = 1;
            for (auto i : freq_of_power)
            {
                if (i.second > 0)
                {
                    temp = temp * i.first;
                    freq_of_power[i.first]--;
                }
            }
            ans += temp;
        }
        cout << ans << "\n";
    }
    return 0;
}
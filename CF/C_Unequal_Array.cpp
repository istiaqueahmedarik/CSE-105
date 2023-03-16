#include <bits/stdc++.h>
using namespace std;
int main()
{
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
        double consSame = 0;
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                consSame++;
            }
            else
            {
                if (consSame)
                {
                    ans += (consSame + 1) / 2;
                    consSame = 0;
                }
            }
        }
        if (consSame)
        {
            ans += (consSame + 1) / 2;
            consSame = 0;
        }
        cout << ans << "\n";
    }
}
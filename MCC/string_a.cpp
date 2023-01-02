#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int possible_sum[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        int x = s[i] - 96;
        possible_sum[i + 1] = possible_sum[i] + x;
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int ans = possible_sum[r] - possible_sum[l - 1];
        cout << ans << "\n";
    }
}
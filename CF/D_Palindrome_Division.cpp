#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
bool palindrome(int n)
{
    int temp = n;
    int rev = 0;
    while (temp)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}
bool even_digits(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n /= 10;
    }
    return cnt % 2 == 0;
}
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    cout << 11 << endl;
    return 0;
}
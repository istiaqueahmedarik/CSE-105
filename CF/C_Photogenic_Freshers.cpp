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
    int cs = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int ones = 0, zeros = 0;
        int temp = n;
        while ((temp & 1) == 0 && temp != 0)
        {
            zeros++;
            temp >>= 1;
        }
        while ((temp & 1) == 1)
        {
            ones++;
            temp >>= 1;
        }
        int p = ones + zeros;
        n |= (1 << (p));
        n &= ~((1 << (p)) - 1);
        n |= (1 << (ones - 1)) - 1;
        cout << "Case " << cs++ << ": ";
        cout << n << endl;
    }
    return 0;
}

/*
    idea hoitese left most 0 ar 1 ke 1 ar 0 kre dite hbe
    first e trailing zero count krte hbe
    then total set bit
    then total bits er left er thik pasher bit take 1 krte hbe
    tar prer shb bit ke 0 kre dite hbe
    then dan theke jot gula 1 ase tar caite 1 kom kre bit set kre dite hbe
    so set bit same thakbe and number will be minimum
*/
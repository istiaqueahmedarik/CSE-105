/*
    n x inf size er ekta matrix ase
    first e shb cell white
    0th dine ekjn arekjne ekta array dey n int pair er
    ith cell matrix er ekta segment bujhay
    l ar r
    l column to r column
    ekjn ith dine ith row te jay and ekta cell ke black kre dey and eta must l ar r er majhe
    nth din pre jdi dekha jay emn kono column nai jetay 1 tar beshi black cell ase taile knuth win

*/

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
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v[i] = {l, r};
    }

    return 0;
}
#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
vector<int> pq;
void start()
{
    for (int i = 2; i < 11; i += 2)
    {
        string num;
        for (int j = 0; j < i / 2; j++)
        {
            num += '4';
        }
        for (int j = 0; j < i / 2; j++)
        {
            num += '7';
        }
        do
        {
            pq.push_back(stoll(num));
        } while (next_permutation(num.begin(), num.end()));
    }
    sort(pq.begin(), pq.end());
}
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    start();
    cout << *lower_bound(pq.begin(), pq.end(), n) << endl;
    return 0;
}
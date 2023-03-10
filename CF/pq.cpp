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
    int q;
    cin >> q;
    priority_queue<int> pq;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int y;
            cin >> y;
            pq.push(y);
        }
        else if (x == 2)
        {
            if (pq.empty())
                cout << "Empty!" << endl;
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
    }
    return 0;
}
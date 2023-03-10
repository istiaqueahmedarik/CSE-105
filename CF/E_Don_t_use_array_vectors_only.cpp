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
        int n, m;
        cin >> n >> m;
        vector<int> main;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            main.push_back(x);
        }
        while (m--)
        {
            char x;
            cin >> x;
            if (x == 'S')
            {
                int d;
                cin >> d;
                for (int i = 0; i < n; i++)
                {
                    main[i] += d;
                }
            }
            else if (x == 'M')
            {
                int d;
                cin >> d;
                for (int i = 0; i < n; i++)
                {
                    main[i] *= d;
                }
            }
            else if (x == 'D')
            {
                int d;
                cin >> d;
                for (int i = 0; i < n; i++)
                {
                    main[i] /= d;
                }
            }
            else if (x == 'R')
            {
                reverse(main.begin(), main.end());
            }
            else if (x == 'P')
            {
                int d1, d2;
                cin >> d1 >> d2;
                swap(main[d1], main[d2]);
            }
        }
        cout << "Case " << cs++ << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << main[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
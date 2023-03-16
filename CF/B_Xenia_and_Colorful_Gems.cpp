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
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> A(a), B(b), C(c);
        for (int i = 0; i < a; i++)
            cin >> A[i];
        for (int i = 0; i < b; i++)
            cin >> B[i];
        for (int i = 0; i < c; i++)
            cin >> C[i];
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        sort(C.begin(), C.end());
        int ans = LLONG_MAX;
        for (int i = 0; i < a; i++)
        {
            int x = A[i];
            int y = upper_bound(B.begin(), B.end(), x) - B.begin();
            if (y > 0 || y == b)
                y--;
            int z = lower_bound(C.begin(), C.end(), x) - C.begin();
            if (z == c)
                z--;
            y = B[y];
            z = C[z];
            ans = min(ans, ((x - y) * (x - y) + (x - z) * (x - z) + (y - z) * (y - z)));
            y = lower_bound(B.begin(), B.end(), x) - B.begin();
            if (y == b)
                y--;
            z = upper_bound(C.begin(), C.end(), x) - C.begin();
            if (z == c || z > 0)
                z--;
            y = B[y];
            z = C[z];
            ans = min(ans, ((x - y) * (x - y) + (x - z) * (x - z) + (y - z) * (y - z)));
        }
        for (int i = 0; i < b; i++)
        {
            int x = B[i];
            int y = upper_bound(A.begin(), A.end(), x) - A.begin();
            if (y > 0 || y == a)
                y--;
            int z = lower_bound(C.begin(), C.end(), x) - C.begin();
            if (z == c)
                z--;
            y = A[y];
            z = C[z];
            ans = min(ans, ((x - y) * (x - y) + (x - z) * (x - z) + (y - z) * (y - z)));
            y = lower_bound(A.begin(), A.end(), x) - A.begin();
            if (y == a)
                y--;
            z = upper_bound(C.begin(), C.end(), x) - C.begin();
            if (z == c || z > 0)
                z--;
            y = A[y];
            z = C[z];
            ans = min(ans, ((x - y) * (x - y) + (x - z) * (x - z) + (y - z) * (y - z)));
        }
        for (int i = 0; i < c; i++)
        {
            int x = C[i];
            int y = upper_bound(A.begin(), A.end(), x) - A.begin();
            if (y > 0 || y == a)
                y--;
            int z = lower_bound(B.begin(), B.end(), x) - B.begin();
            if (z == b)
                z--;
            y = A[y];
            z = B[z];
            ans = min(ans, ((x - y) * (x - y) + (x - z) * (x - z) + (y - z) * (y - z)));
            y = lower_bound(A.begin(), A.end(), x) - A.begin();
            if (y == a)
                y--;
            z = upper_bound(B.begin(), B.end(), x) - B.begin();
            if (z == b || z > 0)
                z--;
            y = A[y];
            z = B[z];
            ans = min(ans, ((x - y) * (x - y) + (x - z) * (x - z) + (y - z) * (y - z)));
        }

        cout << ans << endl;
    }
    return 0;
}
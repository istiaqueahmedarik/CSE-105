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
        int n;
        cin >> n;
        int a[n];
        int likes = 0, dislikes = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
            {
                likes++;
            }
            else
            {
                dislikes++;
            }
        }
        int temp = 0;
        for (int i = 1; i <= likes; i++)
        {
            cout << i << " ";
            temp++;
        }
        for (int i = 1; i <= dislikes; i++)
        {
            cout << --temp << " ";
        }
        cout << endl;
        bool flag = true;
        temp = 0;
        while (likes && dislikes)
        {
            if (flag)
            {
                cout << ++temp << " ";
                likes--;
            }
            else
            {
                cout << --temp << " ";
                dislikes--;
            }
            flag = !flag;
        }
        while (likes--)
        {
            cout << ++temp << " ";
        }
        while (dislikes--)
        {
            cout << --temp << " ";
        }
        cout << endl;
    }
    return 0;
}
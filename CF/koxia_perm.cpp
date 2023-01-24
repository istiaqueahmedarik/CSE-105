#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0, k = 1, j = n; i < n; i += 2, j -= 1, k++)
        {
            if (k != j)
            {
                cout << k << " " << j << " ";
            }
            else
            {
                cout << k << " ";
            }
        }
        cout << "\n";
    }
}
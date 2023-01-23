#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {0};
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x]++;
        arr[y]++;
    }
    int c = 0;
    for (int i = 1; i <= 4; i++)
    {
        if (arr[i] > 1)
            c++;
    }
    if (c >= 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
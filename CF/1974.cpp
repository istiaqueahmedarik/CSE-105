#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {0};
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        arr[x] = 1;
    }
    if (arr[1] == 1 && arr[9] == 1 && arr[7] == 1 && arr[4] == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}
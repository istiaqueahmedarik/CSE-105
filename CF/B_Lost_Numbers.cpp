#include <bits/stdc++.h>
using namespace std;
int arr[10] = {4, 8, 15, 16, 23, 42};
int ans[10];
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        cout << "? " << i << " " << i + 1 << endl;
        cin >> ans[i];
    }
    if (arr[0] * arr[1] == ans[1] && arr[1] * arr[2] == ans[2] && arr[2] * arr[3] == ans[3] && arr[3] * arr[4] == ans[4])
    {
    }
    else
    {
        while (next_permutation(arr, arr + 6))
        {
            if (arr[0] * arr[1] == ans[1] && arr[1] * arr[2] == ans[2] && arr[2] * arr[3] == ans[3] && arr[3] * arr[4] == ans[4])
                break;
        }
    }
    cout << "! ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
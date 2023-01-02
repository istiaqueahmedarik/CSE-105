#include <bits\stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> arr;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        arr.push_back(x);
    }
    long long l = -1;
    long long r = -1;
    for (long long i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            if (l == -1)
                l = i;
        }
        else if (arr[i] < arr[i + 1] && l != -1)
        {
            if (r == -1)
                r = i + 1;
        }
        if (l != 1 && r != -1)
            break;
    }
    if (l != -1 && r == -1)
        r = n;
    // cout << l << r;
    if (l == -1 && r == -1)
    {
        cout << "yes"
             << "\n"
             << 1 << " " << 1 << "\n";
    }
    else
    {
        reverse(arr.begin() + l, arr.begin() + r);

        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "yes"
                 << "\n"
                 << l + 1 << " " << r << "\n";
        }
        else
        {
            cout << "no"
                 << "\n";
        }
    }
}
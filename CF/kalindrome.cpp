#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr;
        vector<long long> arr1;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
            arr1.push_back(x);
        }
        long long l = 0;
        long long r = n - 1;
        long long x = -1;
        long long y = -1;
        int flag = 0;
        while (l <= r)
        {
            if (arr[l] != arr[r])
            {
                x = arr[l];
                y = arr[r];
                break;
            }
            l++;
            r--;
        }

        arr.erase(remove(arr.begin(), arr.end(), x), arr.end());

        int i = 0;
        int j = arr.size() - 1;
        while (i <= j)
        {
            if (arr[i] != arr[j])
            {
                flag = 1;
                break;
            }
            i++;
            j--;
        }
        if (flag == 1)
        {
            arr1.erase(remove(arr1.begin(), arr1.end(), y), arr1.end());
            flag = 0;
            int i = 0;
            int j = arr1.size() - 1;
            while (i <= j)
            {
                if (arr1[i] != arr1[j])
                {
                    flag = 1;
                    break;
                }
                i++;
                j--;
            }
        }
        if (flag == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
#include <bits\stdc++.h>
using namespace std;
bool check(long long num)
{
    int count = 0;
    for (long long i = 1; i <= num / 2; i++)
    {
        if (count > 3)
        {
            break;
        }
        if (num % i == 0)
        {
            if (num / i == i)
            {
                count++;
            }
            else
            {
                count += 2;
            }
        }
    }
    if (count == 3)
        return 1;
    return 0;
}
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

    for (long long i = 0; i < n; i++)
    {

        if (check(arr[i]))
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }
}
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long result = (n * (n - 1)) % 1000000007;
        for (long long i = n; i >= 1; i--)
        {
            result = (result * i) % 1000000007;
        }
        long long r = (result) % 1000000007;
        cout << (r) << "\n";
    }

    return 0;
}

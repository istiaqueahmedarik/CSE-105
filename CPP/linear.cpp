#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(100000, 0);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[a] = i + 1;
    }
    int q;
    cin >> q;
    long long int First = 0, Sec = 0;
    while (q--)
    {
        int x;
        cin >> x;
        First += v[x];
        Sec += n - v[x] + 1;
    }
    cout << First << " " << Sec;
}
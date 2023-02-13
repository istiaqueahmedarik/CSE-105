#include <bits/stdc++.h>
using namespace std;
int POW(int x, int n)
{
    return n ? n & 1 ? x * POW(x * x, n >> 1)
                     : POW(x * x, n >> 1)
             : 1;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << POW(x, n) << endl;
    return 0;
}
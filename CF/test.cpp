#include <bits/stdc++.h>
using namespace std;
int ncr(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    return ncr(n - 1, r - 1) + ncr(n - 1, r);
}
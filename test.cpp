#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long rate = 3;
        long long sat = 1;
        long long ans = 1;
        while (sat != n * n)
        {
            long long prev = sat;
            sat += rate;
            ans += sat + (prev + sat) / 2;
            rate += 2;
        }
        long long int y = (2022 * ans);
        long long int x = y%1000000007;
        cout<< x<<"\n";
    }
}
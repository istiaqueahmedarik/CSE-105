#include<bits\stdc++.h>
using namespace std;
long long ncr(long long n,long long r)
{
    if(r==0||r==n) return 1;
    return ncr(n-1,r-1)+ncr(n-1,r);
}
int main()
{
    long long n,m;
    cin>>n>>m;
    cout<<ncr(n/m,2)+ncr(n%m,2)<<" "<<n/m<<ncr(n-m+1,2);

}
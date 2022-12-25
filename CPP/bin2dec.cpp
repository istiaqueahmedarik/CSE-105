#include<bits\stdc++.h>
using namespace std;
int power(int a, int n)
{
    int ans=1;
    while(n)
    {
        if(n&1) ans*=a;
        a*=a;
        n>>=1;
    }
    return ans;
}
int dec(int n,int r){
    if(n==0) return 0;
    return dec(n/10,r+1)+n%10*power(2,r);
}
int main()
{
    int n;
    cin>>n;
    cout<<dec(n,0);
}


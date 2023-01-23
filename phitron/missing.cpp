#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> v(n,0);
    for(long long i=0;i<n-1;i++){
        long long x;
        cin>>x;
        v[x]++;
    }
    for(long long i=1;i<=n;i++){
        if(v[i]==0){
            cout<<i;
            break;
        }
    }
}
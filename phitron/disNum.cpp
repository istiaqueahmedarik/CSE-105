#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> v;
    for(long long i=0;i<n;i++){
        long long a;
        cin>>a;
        v.push_back(a);
    }
    long long ans = n;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        if(v[i]==v[i+1]) ans--;
    }
    cout<<ans;
}
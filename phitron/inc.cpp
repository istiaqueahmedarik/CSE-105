#include<iostream>
#include <vector>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>arr;
    for(long long i=0;i<n;i++){
        long long temp;
        cin>>temp;
        arr.push_back(temp);
    }
    long long k=0;
    for(long long i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            k+=arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    
    }
    cout<<k;
}
#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<"\n";
    }else if(n==1){
        cout<<1<<" ";
    }
    else{
        long long x = 2;
        for(long long i=0;i<n;i++){            
            cout<<x<<" ";
            if(x+2>n){
                x=1;
            }else{
                x+=2;
            }
        }
    }
}
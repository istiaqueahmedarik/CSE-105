#include<bits\stdc++.h>
using namespace std;
void star(int n,int r){
    if(n==0) return;
    for(int i=0;i<n;i++){
        cout<<" ";
    }
    for(int i=0;i<r;i++){
        cout<<"*";
    }
    for(int i=1;i<r;i++){
        cout<<"*";
    }
    cout<<"\n";
    star(n-1,r+1);
    for(int i=0;i<n;i++){
        cout<<" ";
    }
    for(int i=0;i<r;i++){
        cout<<"*";
    }
    for(int i=1;i<r;i++){
        cout<<"*";
    }
    cout<<"\n";
}
int main(){
    int n;
    cin>>n;
    star(n,0);
}
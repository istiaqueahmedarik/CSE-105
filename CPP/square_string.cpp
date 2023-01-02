#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.length()%2==1) cout<<"NO"<<"\n";
        else{
            int x = s.length()/2;
            int i;
            for(i=0;i<x;i++){
                if(s[i]!=s[x+i]){
                    cout<<"NO"<<"\n";
                    break;
                }
            }
            if(i==x) cout<<"YES"<<"\n";
        }
    }
}
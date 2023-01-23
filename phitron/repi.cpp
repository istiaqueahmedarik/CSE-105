#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long count=0;
        long long c = 1;
        char currC = ' ';
    for(long long i=0;i<s.length();i++){
        if(s[i]==currC){
            c++;
        }else{
            if(c>count){
                count = c;
            }
                c=1;
                currC = s[i];
        }
    }
    if(c>count){
                count = c;
                c=0;
            }
    cout<<count;
}
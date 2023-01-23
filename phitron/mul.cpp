#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int p;
    for(int i=0;i<s.length();i++){
        if(s[i]=='x'){
            p=i;
            break;
        }
    }
    string s1,s2;
    for(int i=0;i<p;i++){
        s1+=s[i];
    }
    for(int i=p+1;i<s.length();i++){
        s2+=s[i];
    }
    int x = stoi(s1);
    int y = stoi(s2);
    cout<<x*y;
}
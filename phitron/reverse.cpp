#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    a--;
    b--;
    while(a<=b){
        char temp = s[a];
        s[a] = s[b];
        s[b] = temp; 
        a++;
        b--;
    }
    cout<<s;
}
#include<bits\stdc++.h>
using namespace std;
string reverse(string s){
    if(s.empty()) return "";
    return reverse(s.substr(1))+s[0];
}
int main()
{
    string s1 = reverse("HELLO");
    cout<<s1<<endl;
}
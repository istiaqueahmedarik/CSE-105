#include<iostream>
#include<string>
using namespace std;
int fact(int i){
	if (i <= 1) return 1;
  	else return i*fact(i-1);
}
int main(){
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }
    int count = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>1) count+=arr[i];
    }
    int ans = fact(s.length())/fact(count);
    cout<<ans;
}
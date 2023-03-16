#include<bits\stdc++.h>
using namespace std;
int binarySearch(int arr[],int left,int right,int x){
    if(left>right) return -1;
    int mid = (left+right)/2;
    if(x==arr[mid]) return mid;
    if(x<arr[mid]) return binarySearch(arr,left,mid-1,x);
    return binarySearch(arr,mid+1,right,x);     
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   int x;
   cin>>x;
   cout<<binarySearch(arr,0,n-1,x);

}
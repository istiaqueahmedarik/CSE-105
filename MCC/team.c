#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    arr[0] = 1;
    for(int i=0;i<n-1;i++){
        int temp;
        scanf("%d",&temp);
        arr[temp+1] = i+2;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
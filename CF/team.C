#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans = 0;

    for(int i=0;i<n;i++){
        int p,q,r;
        scanf("%d %d %d",&p,&q,&r);
        if(p+q+r>=2){
            ans+=1; 
        }
    }
   
    printf("%d",ans);
    
}
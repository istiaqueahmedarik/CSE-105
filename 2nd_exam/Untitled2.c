#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j=n+1-i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

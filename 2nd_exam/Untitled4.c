#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int m=1;
        for(int j=1;m<=i;j++){
            int k;
            for(k=2;k<=j/2;k++){
                if(j%k==0){
                    break;
                }
            }
            if(k==j/2+1){
            printf("%d ",j);
            m++;
            }
        }
        printf("\n");
    }
    return 0;
}


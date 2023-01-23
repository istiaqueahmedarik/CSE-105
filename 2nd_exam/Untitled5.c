#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;

    while(n!=0){
        sum+=n%10;
        n/=10;
        if(n==0){
            int temp_count = 0;
            int temp_num = sum;
            while(temp_num!=0){
                temp_count++;
                temp_num/=10;
            }
            if(temp_count==1){
                break;
            }else{
                n=sum;
                sum=0;
            }

        }
    }
    printf("%d",sum);


}

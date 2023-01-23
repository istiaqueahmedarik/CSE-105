#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int real_sub = abs(a-b);

    if(real_sub%10!=5){
        real_sub = (real_sub/10)*10+5;
    }else{
        real_sub = (real_sub/10)*10+8;

    }
    printf("%d",real_sub);
}


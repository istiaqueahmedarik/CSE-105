#include<stdio.h>
#include<string.h>
int main()
{
    int sum,carry=0,j;
    char str1[100],str2[100],str3[100];
    gets(str1);
    gets(str2);
    int l1=strlen(str1);
    int l2=strlen(str2);
    if(l1==l2)
    {
        for(int i=l2-1;i>=0;i--)
        {
            sum=(str1[i]-'0')+(str2[i]-'0')+carry;
            carry=0;
            if(sum>9)
            {
                carry=sum/10;
                sum=sum%10;
            }
            str3[j]=sum+'0';
            j++;
        }
        if(carry!=0) str3[j]=carry+'0';
        puts(strrev(str3));
    }
    else if(l1>l2)
    {
        for(int i=l2-1;i>=0;i--)
        {

            sum=(str1[l1-1]-'0')+(str2[i]-'0')+carry;
            l1--;
            carry=0;
            if(sum>9)
            {
                carry=sum/10;
                sum=sum%10;
            }
            str3[j]=sum+'0';
            j++;
        }
        for(int i=l1;i>=0;i--)
        {
            sum=str1[i]-'0'+carry;
            carry=0;
            if(sum>9)
            {
                carry=sum/10;
                sum=sum%10;
            }
            str3[j]=sum+'0';
            j++;
        }
        puts(strrev(str3));
    }
    //l2>l1
    else
    {
        for(int i=l1-1;i>=0;i--)
        {
            sum=(str1[i]-'0')+(str2[l2-1]-'0')+carry;
            l2--;
            carry=0;
            if(sum>9)
            {
                carry=sum/10;
                sum=sum%10;
            }
            str3[j]=sum+'0';
            j++;
        }
        for(int i=l2-1;i>=0;i--)
        {
            sum=carry+(str2[i]-'0');
            carry=0;
            if(sum>9)
            {
                carry=sum/10;
                sum=sum%10;
            }
            str3[j]=sum+'0';
            j++;

        }
        if(carry!=0) str3[j]=carry+'0';
        puts(strrev(str3));
    }

    return 0;
}
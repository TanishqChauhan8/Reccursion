#include<stdio.h>
int reverse(int num,int rev)
{
    if(num!=0)
    {
        rev=rev*10+(num%10);
        reverse(num/10,rev);
    }
    else 
    return rev;
}

int main()
{
 int num=0,rev=0;
 printf("Enter the Number which you want to reverse : ");
 scanf("%d",&num);
 rev=reverse(num,rev);
 printf("Reverse ---> %d",rev);   
}
#include<stdio.h>
int sum_of_cdigit(int num,int sum,int rem)
{
    if(num!=0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
        sum_of_cdigit(num,sum,rem);
    }
    else
    return sum;
}

int main()
{
    int num=0,sum=0,rem=0;
    printf("Enter the Number whose digit cube Sum you want to calculate : ");
    scanf("%d",&num);
    sum=sum_of_cdigit(num,sum,rem);
    printf("Sum - %d",sum);
}
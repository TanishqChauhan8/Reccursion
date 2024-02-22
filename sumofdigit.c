#include<stdio.h>
int sum_of_digit(int num,int sum)
{
 if(num!=0)
 {
    sum=sum+num%10;
    num=num/10;
    sum_of_digit(num,sum);
 }
 else
 return sum;
}

int main()
{
    int num=0,sum=0;
    printf("Enter the Number whose digit Sum you want to calculate : ");
    scanf("%d",&num);
    sum=sum_of_digit(num,sum);
    printf("Sum - %d",sum);
}
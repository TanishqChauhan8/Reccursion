#include<stdio.h>
int factor(int i,int n,int sum)
{
    if(i<n)
    {
        if(n%i==0)
            sum=sum+i;

        factor(i+1,n,sum);
    }
    else
    return sum;
}

int main()
{
    int n,i=1,sum=0;
    printf("Enter the Number whose factor sum u want to calculate : ");
    scanf("%d",&n);
    sum=factor(i,n,sum);
    printf("Sum of factors ---> %d",sum);
}
#include<stdio.h>

void fabonaci(int i,int a,int b,int n)
{
    int sum=0;
    if(i<=n)
    {
        sum=a+b;
        printf(",%d",sum);
        a=b;
        b=sum;
        fabonaci(i+1,a,b,n);
    }
}

int main()
{
    int i=2,a=0,b=1,n;
    printf("Enter the Number upto where You want to print fabonacci Series : ");
    scanf("%d",&n);
    printf("Series ---> %d",a);
    printf(",%d",b);
    fabonaci(i,a,b,n);
}
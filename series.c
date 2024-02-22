#include<stdio.h>
void series(int i,int n)
{
    if(i<=n)
    {
        printf(" %d",i);
        printf("+x");
        series(i+1,n);
    }
}

int main()
{
    int n,i=1;
    printf("Enter the Number upto where u want to sum up series : ");
    scanf("%d",&n);
    series(i,n);
}
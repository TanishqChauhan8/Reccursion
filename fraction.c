#include<stdio.h>
void series(int i,int n,int a,int b)
{
    if(i<=n)
    {
        printf("%d/%d ",a,b);
        a=b;
        b++;
        series(i+1,n,a,b);
    }
}

int main()
{
    int n,a=1,b=2,i=1;
    printf("Entr the Number upto where u want to print series : ");
    scanf("%d",&n);
    series(i,n,a,b);
}
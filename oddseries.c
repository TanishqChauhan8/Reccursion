#include<stdio.h>
void odd(int i,int n)
{
    if(i<n)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
        odd(i+1,n);
    }
}
int main()
{
    int n,i=1;
    printf("Enter the Number upto where u want to print odd num : ");
    scanf("%d",&n);
    odd(i,n);
}
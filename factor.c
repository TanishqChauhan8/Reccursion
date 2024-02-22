#include<stdio.h>
void factor(int i,int n)
{
    if(i<n)
    {
        if(n%i==0)
            printf("%d ",i);

        factor(i+1,n);
    }
}
int main()
{
    int n,i=1;
    printf("Enter the Number whose factor u want to print : ");
    scanf("%d",&n);
    printf("Factor are ---> ");
    factor(i,n);
}
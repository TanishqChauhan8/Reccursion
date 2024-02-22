#include<stdio.h>
void even(int i,int n)
{
    if(i<n)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        even(i+1,n);
    }
}
int main()
{
    int n,i=0;
    printf("Enter the Number upto where u want to print even num : ");
    scanf("%d",&n);
    even(i,n);
}
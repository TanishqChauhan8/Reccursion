#include<stdio.h>
void fun(int num)
{
    if(num>0)
    {
        printf("%d\t",num);
        fun(num-2);
        fun(num-2);
    }
}

int main()
{
 int num;
 printf("Enter the Number : ");
 scanf("%d",&num);
 fun(num);
}